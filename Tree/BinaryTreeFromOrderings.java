import java.util.Arrays;

public class Main {
    static class TreeNode {
        char val;
        TreeNode lefttree;
        TreeNode righttree;

        TreeNode(char data) {
            this.lefttree = null;
            this.righttree = null;
            this.val = data;
        }
    }

    public static void BinaryTreeFromOrderings(String inOrder, String prOrder, int length) {
        if (length == 0)
            return;
        TreeNode node = new TreeNode(prOrder.toCharArray()[0]);
        int i = 0;
        for (; i < length; i++) {
            if (inOrder.toCharArray()[i] == prOrder.toCharArray()[0]) {
                break;
            }
        }
        BinaryTreeFromOrderings(inOrder, prOrder.substring(1), i);
        BinaryTreeFromOrderings(inOrder.substring(i + 1), prOrder.substring(i + 1), length - (i + 1));
        System.out.print(node.val);
        return;
    }

    public static void main(String[] args) {
        String pr = "GDAFEMHZ";
        String in = "ADEFGHMZ";
        BinaryTreeFromOrderings(in, pr, pr.length());
    }
}
