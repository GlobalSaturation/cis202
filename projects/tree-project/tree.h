#ifndef TREE_H

#include <vector>
#include <string>


class Node
{
private:
   /**
      Computes the size of the subtree whose root is this node.
      @return the number of nodes in the subtree
   */
   int size() const;

   std::string data;
   std::vector<Node*> children;
friend class Tree;   
};

/*
   A tree in which each node has an arbitrary number of children.
*/
class Tree
{
public:
   /**
      Constructs an empty tree.
   */
   Tree();

   /**
      Constructs a tree with one node and no children.
      @param root_data the data for the root
   */
   Tree(std::string root_data);

   /**
      Adds a subtree as the last child of the root.
   */
   void add_subtree(const Tree& subtree);

   /**
      Computes the size of this tree.
      @return the number of nodes in the tree
   */
   int size() const;

  
   
private:   
   Node* root;
};

#endif
