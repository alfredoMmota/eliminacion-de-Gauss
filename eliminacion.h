#ifndef ELIMINACION_H
#define ELIMINACION_H

#include <QMainWindow>
#include <QGenericMatrix>

namespace Ui {
class eliminacion;
}
class eliminacion : public QMainWindow
{
    Q_OBJECT
public:
    explicit eliminacion(QWidget *parent = 0);
    ~eliminacion();
   double arreglo[4][5];//se crea la matriz donde se manipularan los valores
                        //the matrix is ​​created where the values ​​are manipulated
private slots:
    void Metodo();//se declara la funcion metodo
                  // method function is declared
    void borrar();//se declara la funcion borrar
                  // the function is declared clear
private:
    Ui::eliminacion *ui;
};
#endif // ELIMINACION_H
