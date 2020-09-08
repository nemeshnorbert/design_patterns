#include "composite.h"
#include "leaf.h"

int main(int argc, char** argv)
{
    auto root = std::make_shared<Composite>("root");
    auto branch1 = std::make_shared<Composite>("branch1");
    auto branch2 = std::make_shared<Composite>("branch2");
    auto leaf12 = std::make_shared<Leaf>("leaf12");
    auto leaf11 = std::make_shared<Leaf>("leaf11");
    auto leaf21 = std::make_shared<Leaf>("leaf12");
    auto leaf22 = std::make_shared<Leaf>("leaf11");

    branch1->Add(leaf11);
    branch1->Add(leaf12);

    branch2->Add(leaf21);
    branch2->Add(leaf22);

    root->Add(branch1);
    root->Add(branch2);

    root->Operation();

	return 0;
}
