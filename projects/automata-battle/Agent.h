#pragma once
#include<string>
using namespace std;

class Board
{
private:
	int mat[4][4];
public:
	Board();
	void draw_mat();
	~Board();

};


class Agente
{
private:
	int i;
	int j; 
	int id;
	string last_move;
public:
	Agente(int i, int j, int id, string lm);
	void set_cords(int i, int j);
	string expand_node(Board board);
	void move_agent(Board* board);
	string get_movement(Board board);
	~Agente();

};

