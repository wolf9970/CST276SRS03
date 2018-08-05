cmake_minimum_required(VERSION 3.12)
project(CST276SRS03)

set(CMAKE_CXX_STANDARD 17)

add_executable(CST276SRS03 main.cpp GoFComposite/Component.cpp GoFComposite/Component.h GoFComposite/Leaf.cpp GoFComposite/Leaf.h GoFComposite/Composite.cpp GoFComposite/Composite.h GoFComposite/Client.cpp GoFComposite/Client.h GoFFactoryMethod/Creator.cpp GoFFactoryMethod/Creator.h GoFFactoryMethod/ConcreteCreator.cpp GoFFactoryMethod/ConcreteCreator.h GoFFactoryMethod/Product.h GoFFactoryMethod/ConcreteProduct.cpp GoFFactoryMethod/ConcreteProduct.h)