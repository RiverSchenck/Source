#ifndef H_Expression_Tree
#define H_Expression_Tree
#include "BinaryTree.h"
#include <cmath>
#include <iostream>
#include <string>


class ExpressionTree : private BinaryTree<std::string>{

   public:
      ExpressionTree();
      ExpressionTree(std::string exp);
      void setExpression(std::string exp);
      double getResult();
      void printParseTreeInOrder(std::ostream& os);
      void printParseTreePostOrder(std::ostream& os);
	  double eval(BinaryTreeNode<std::string>* node) const;
	  double eval() const;

};


#endif
