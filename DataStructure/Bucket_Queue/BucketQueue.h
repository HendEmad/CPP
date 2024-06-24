#include <iostream>
#include <vector>
#include <list>
#include <limits>

class BucketQueue {
    std::vector<std::list<int>> buckets;
public:
    BucketQueue(int max_priority) : buckets(max_priority + 1) {}

    void insert(int priority, int value) {
        if (priority >= 0 && priority < buckets.size()) {
            buckets[priority].push_back(value);
        }
    }

    int extract_min() {
        for (int i = 0; i < buckets.size(); ++i) {
            if (!buckets[i].empty()) {
                int min_val = buckets[i].front();
                buckets[i].pop_front();
                return min_val;
            }
        }
        return -1; // Indicates the queue is empty
    }

    bool is_empty() const {
        for (const auto& bucket : buckets) {
            if (!bucket.empty()) return false;
        }
        return true;
    }

    void delete_element(int priority, int value) {
        if(priority >= 0 && priority <= buckets.size()) {
            // find the priority of the element to be deleted
            auto& bucket = buckets[priority];
            // remove the element from the bucket
            bucket.remove(value); 
        }
    }

    bool search_element(int priority, int value){
        if(priority >= 0 && priority <= buckets.size()) {
            // Find the priority of the element to search for
            auto& bucket = buckets[priority];
            // Search the bucket for the element, and
            // Return true of the element is found, false otherwise.
            return std::find(bucket.begin(), bucket.end(), value) != bucket.end();
        }
        return false;
    }

    void traverse() {
        // Iterate over each bucket starting from the lowest priority
        for(int priority = 0; priority < buckets.size(); priority++) {
            auto& bucket = buckets[priority];
            // For each bucket, iterate over its elements list.
            for(auto& value : bucket) {
                // print each element.
                std::cout << "Priority " << priority+1 << ": " << value << std::endl;
            }
        }
    }
};
