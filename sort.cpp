// add sort a (LLL) of integers
bool sort(int input, node * head) 
{
	if (!head) 
	{
		head = new node;
		head->data = input;
		head->next = nullptr;
		return true;
	}

	if (input >= head->data) return sort(input,head->next);

	if (input <= head->data)
	{
		// mke a cpy of head's data
		node * tmp = new node;
		tmp->data = head->data;
		tmp->next = nullptr;

		// reassign the input's data to head
		head->data = input->data;

		// cpy tmp data into the input
		input->data = tmp->data;
	}
	return sort(input, head->next);
} 

