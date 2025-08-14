#include<iostream>
using namespace std;

class BudgetMatrix {
private:
    int rows;    // trimestres
    int cols;    // 2 columnas: presupuesto y pago
    double** data;

public:
    BudgetMatrix(int rows, int cols);
    ~BudgetMatrix();
    void setBudget(const double* budgets);
    void calculatePending(int quarter);
    double totalPaid(int quarter) const;
    double pendingPercentage(int quarter) const;
    void display() const;
};

BudgetMatrix::BudgetMatrix(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;
    data = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        data[i] = new double[cols]{0};
    }
}
BudgetMatrix::~BudgetMatrix() {
    for (int i = 0; i < rows; ++i) {
        delete[] data[i];
    }
    delete[] data;
}

void BudgetMatrix::setBudget(const double* budgets) {
    for (int i = 0; i < rows; ++i) {
        int blockStart = 0;
        data[i][0] = budgets[blockStart];     
        data[i][1] = budgets[blockStart + 1 + i];
        data[i][2] = data[i][0] - data[i][1];   
    }
}

int main() {
   

	return 0;
}