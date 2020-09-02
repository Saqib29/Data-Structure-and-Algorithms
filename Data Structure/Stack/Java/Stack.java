public class Stack{
	private static class Node{
		private int data;
		private Node next;
		private Node(int data){
			this.data = data;
		}
	}
	
	private Node top;
	
	public boolean isEmpty(){
		return top == null;
	}
	
	public int peek(){
		if(isEmpty()){
			System.out.print("Empty Stack ");
			return 404;
		}
		else{
			return top.data;
		}
	}
	
	public void push(int data){
		Node node = new Node(data);
		node.next = top;
		top = node;
	}
	
	public int pop(){
		if(top == null){
			System.out.println("Stack is empty!.");
			return 404;
		}
		else{
			int data = top.data;
			top = top.next;
			return data;
		}
	}
	
	public static void main(String[] args){
		Stack s = new Stack();
		for(int i=0; i<10; i++){
			s.push(i);
		}
		System.out.println("Peek Value: "+s.peek());
		
		while (true){
			if(s.top == null){
			System.out.println("Null");
			break;
			}
			else{
				System.out.println(s.pop());
			}
		}
		System.out.println(s.peek());
		
		System.out.println("Is Stack empty? "+s.isEmpty());
		
		
	}
}