#include <SFML/Graphics.hpp>

int main()
{

    // creamos la ventana de 800x600 pixeles
    sf::RenderWindow ventana(sf::VideoMode(800, 600), "Ventana de Dibujo");
    // Definimos las variables
    int x = 1, y = 1;// coordenadas
    int incremento_x = 5, incremento_y = 5;
    int limite_izquierdo = 0, limite_derecho = 800;
    int limite_superior = 0, limite_inferior = 600;

    //creamos un objeto circulo con un radio 10
    // y definimos su color verde

    sf::CircleShape circulo1(10);
    circulo1.setFillColor(sf::Color::Green);

    // ejecutar el programa mientras la ventana esté abierta
    while (ventana.isOpen())
    {
        //verificamos todos los eventos de la ventana 
        sf::Event evento;
        while (ventana.pollEvent(evento))
        {
            // "cierre solicitado" evento: cerramos la ventana
            if (evento.type == sf::Event::Closed)
                ventana.close();
        }

        // limpiamos la ventana con el color negro
        ventana.clear(sf::Color::Black);

        // verificamos los bordes de la ventana y cambiamos
        // el signo de los incrementos 

        if (x <= limite_izquierdo) 
             incremento_x = abs(incremento_x);

        if (x >= limite_derecho)
            incremento_x =-incremento_x;

        if (y <= limite_superior)
            incremento_y = abs(incremento_y);

        if (y >= limite_inferior)
            incremento_y =- incremento_y;

        x = x + incremento_x;
        y = y + incremento_y;

    //pasamos las coordenadas actuales (x,y) al objeto circulo1

        circulo1.setPosition(x,y);

        // dibujamos el circulo en la ventana
        ventana.draw(circulo1);

        // mostramos ventana en la pantalla
        ventana.display();

    }

    return 0;
}
