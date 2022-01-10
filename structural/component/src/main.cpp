#include "composite.h"
#include "leaf.h"

int main(int argc, char** argv)
{
    std::shared_ptr<Component> root = std::make_shared<Composite>("root");
    std::shared_ptr<Component> branch1 = std::make_shared<Composite>("branch1");
    std::shared_ptr<Component> branch2 = std::make_shared<Composite>("branch2");
    std::shared_ptr<Component> leaf12 = std::make_shared<Leaf>("leaf12");
    std::shared_ptr<Component> leaf11 = std::make_shared<Leaf>("leaf11");
    std::shared_ptr<Component> leaf21 = std::make_shared<Leaf>("leaf12");
    std::shared_ptr<Component> leaf22 = std::make_shared<Leaf>("leaf11");

    branch1->Add(leaf11);
    branch1->Add(leaf12);

    branch2->Add(leaf21);
    branch2->Add(leaf22);

    root->Add(branch1);
    root->Add(branch2);

    root->Operation();

    return 0;
}
