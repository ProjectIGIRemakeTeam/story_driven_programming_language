class TrainYard {
private:
    int size; // Size of the level in sq2.
    std::vector<Object> objects // All objects on this level.

public:
    TrainYard(int size, std::vector<Object> objects) {
        this->size = size;
        this->objects = objects;
    }
    
    // Getters 
    int getSize() const { return size; }
    std::vector<Object> getObjects() const { return objects; }
};


// Create a TrainYard object.
std::vector<Object> trainyardObjects;
int trainyardSize = 1000;
TrainYard trainyard(trainyardSize, trainyardObjects);

// Access the size and objects.
std::cout << "TrainYard size: " << trainyard.getSize() << std::endl;
std::cout << "Number of objects: " << trainyard.getObjects().size() << std::endl;
