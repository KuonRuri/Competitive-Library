#include<bits/stdc++.h>

/* <<----- Start Library from KuonRuri ----->>
 
 * <<----- Start this Library's author and license ----->>
 * © 2023 KuonRuri
 * LICENSE is MIT (see https://github.com/KuonRuri/Competitive-Library/LICENSE )
 * Original is here: https://github.com/KuonRuri/Competitive-Library
 * <<----- End this Library's author and license ----->>
 
 */

namespace kuonruri {

    class UnionFind {

        public:

            explicit UnionFind(size_t NodeCountSum) : Parent(NodeCountSum, -1) {}

            // NodeAとNodeBに指定された頂点が同じグループか判定
            bool connect(int NodeA, int NodeB) {
                return root(NodeA) == root(NodeB);
            }

            // NodeAとNodeBに指定された頂点を同じ頂点にする。
            void merge(int NodeA, int NodeB) {
                NodeA = root(NodeA), NodeB = root(NodeB);
                if (NodeA == NodeB)
                    return;
                if (Parent[NodeA] < Parent[NodeB]) {
                    std::swap(NodeA, NodeB);
                }
                Parent[NodeA] += Parent[NodeB];
                Parent[NodeB] = NodeA;
            }

           // Node引数に指定された頂点のグループの頂点数の合計を返却
            int size(int Node) {
                return -1 * Parent[root(Node)];
            }

        private:

            // -1で初期化
            // 根のときには -1 * そのグループの頂点数を保持
            // それ以外のときには、親の頂点を保持
            std::vector<int> Parent;

            // Nodeに指定された頂点の根を返却
            int root(int Node) {
                if (Parent[Node] <= -1)
                    return Node;

                // 経路圧縮
                return Parent[Node] = root(Parent[Node]);
            }

    };

}

/* <<----- End Library from KuonRuri ----->> */
