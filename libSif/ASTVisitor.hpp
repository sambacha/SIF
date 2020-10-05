#ifndef SIF_LIBSIF_ASTVISITOR_H_
#define SIF_LIBSIF_ASTVISITOR_H_

#include "ASTNodes.hpp"

namespace Sif {
    void before(std::string arg = "");
    void visit(ASTNode* node);
    void after();
}

void visit(ASTNode* node) {
    if (node->get_node_type() == NodeTypeFunctionDefinition) {
        FunctionDefinitionNode* fd = (FunctionDefinitionNode*) node;
        std::cout << fd->get_name();
        fd->set_name("func");
    }
}

#endif //SIF_LIBSIF_ASTVISITOR_H_
