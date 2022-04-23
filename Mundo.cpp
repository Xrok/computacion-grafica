

#include "Mundo.h"

void Mundo::escenario3()
{
    cam.init(60, 10, 600, 400,
             vec3(20, 40, 120),
             vec3(0, 1, 0),
             vec3(0, 1, 0));
    cam.calcular_vectores();

    luz.set(vec3(35, 35, 50), vec3(1, 1, 1));
    Cilindro *cil1 = new Cilindro;
    cil1->color = vec3(0.5, 0.5, 0.5);
    cil1->pa = vec3(0, 20, 10);
    cil1->pb = vec3(0, 0, 10);
    cil1->ra = 10;
    cil1->ke = 0;
    cil1->ior = 1.5;
    vec_objetos.emplace_back(cil1);

    Cilindro *tapaTop = new Cilindro;
    tapaTop->color = vec3(0.7, 0.4, 0.2);
    tapaTop->pa = vec3(0, 0, 10);
    tapaTop->pb = vec3(0, -2, 10);
    tapaTop->ra = 10;
    tapaTop->ke = 0;
    vec_objetos.emplace_back(tapaTop);

    Cilindro *tapaBot = new Cilindro;
    tapaBot->color = vec3(0.7, 0.4, 0.2);
    tapaBot->pa = vec3(0, 22, 10);
    tapaBot->pb = vec3(0, 20, 10);
    tapaBot->ra = 10;
    tapaBot->ke = 0;
    vec_objetos.emplace_back(tapaBot);

    Plano *plano = new Plano;
    plano->n = vec3(1, 1, 1);
    plano->n.normalize();
    plano->d = 0;
    plano->color = vec3(0.2, 0.2, 0.2);
    plano->kd = 0.9;
    plano->ke = 0;
    vec_objetos.emplace_back(plano);

    Esfera *luciernaga1 = new Esfera;
    luciernaga1->cen = vec3(-1, 5, 10);
    luciernaga1->rad = 1;
    luciernaga1->color = vec3(0.9, 0.7, 0.1);
    luciernaga1->kd = 0.8;
    luciernaga1->ke = 0.9;
    luciernaga1->n = 4;
    vec_objetos.emplace_back(luciernaga1);

    Esfera *luciernaga2 = new Esfera;
    luciernaga2->cen = vec3(3, 12, 10);
    luciernaga2->rad = 1;
    luciernaga2->color = vec3(0.9, 0.7, 0.1);
    luciernaga2->kd = 0.8;
    luciernaga2->ke = 0.9;
    luciernaga2->n = 4;
    vec_objetos.emplace_back(luciernaga2);

    Esfera *luciernaga3 = new Esfera;
    luciernaga3->cen = vec3(2, 17, 10);
    luciernaga3->rad = 1;
    luciernaga3->color = vec3(0.9, 0.7, 0.1);
    luciernaga3->kd = 0.8;
    luciernaga3->ke = 0.9;
    luciernaga3->n = 4;
    vec_objetos.emplace_back(luciernaga3);

    cam.Renderizar(luz, vec_objetos);
}

void Mundo::escenario2()
{
    cam.init(60, 10, 600, 400,
             vec3(20, 40, 120),
             vec3(0, 0, 0),
             vec3(0, 1, 0));
    cam.calcular_vectores();

    luz.set(vec3(35, 35, 50), vec3(1, 1, 1));
    float pos = 20;
    for (int f = -5; f < 5; f++)
    {
        for (int c = -5; c < 5; c++)
        {
            Esfera *esf1 = new Esfera;
            esf1->cen = vec3(f * pos, 0, c * pos);
            esf1->rad = 7;
            esf1->color = vec3(1, 0, 0);
            esf1->kd = 0.8;
            esf1->ke = 0.9;
            esf1->kr = 0.8;
            // esf1->ior = 1.5;
            esf1->n = 8;
            vec_objetos.emplace_back(esf1);
        }
    }
    Plano *plano = new Plano;
    plano->n = vec3(1, 10, 1);
    plano->n.normalize();
    plano->d = 0;
    plano->color = vec3(0, 1, 0);
    plano->kd = 0.9;
    plano->ke = 0;
    vec_objetos.emplace_back(plano);

    cam.Renderizar(luz, vec_objetos);
}

void Mundo::escenario1()
{
    cam.init(60, 10, 600, 400,
             vec3(20, 40, 80),
             vec3(0, 0, 0),
             vec3(0, 1, 0));
    cam.calcular_vectores();

    luz.set(vec3(35, 35, 50), vec3(1, 1, 1));
    Esfera *esf1 = new Esfera;
    esf1->cen = vec3(0, 0, 0);
    esf1->rad = 20;
    esf1->color = vec3(1, 0, 0);
    esf1->kd = 0.8;
    esf1->ke = 0.9;
    esf1->n = 4;
    vec_objetos.emplace_back(esf1);

    Esfera *esf2 = new Esfera;
    esf2->cen = vec3(30, 30, 0);
    esf2->rad = 15;
    esf2->color = vec3(1, 1, 0);
    esf2->kd = 0.8;
    esf2->ke = 0.4;
    esf2->n = 16;
    // esf2->ior = 1.3;
    vec_objetos.emplace_back(esf2);

    Esfera *esf3 = new Esfera;
    esf3->cen = vec3(-30, 20, 0);
    esf3->rad = 20;
    esf3->color = vec3(0, 0, 1);
    esf3->kd = 0.8;
    esf3->ke = 0.4;
    // esf3->kr = 0.9;
    esf3->n = 8;
    vec_objetos.emplace_back(esf3);

    Plano *plano = new Plano;
    plano->n = vec3(1, 10, 1);
    plano->n.normalize();
    plano->d = 0;
    plano->color = vec3(0, 1, 0);
    plano->kd = 0.9;
    plano->ke = 0;
    vec_objetos.emplace_back(plano);

    Cilindro *cil1 = new Cilindro;
    cil1->color = vec3(0, 1, 1);
    cil1->pa = vec3(5, 30, 20);
    cil1->pb = vec3(-5, 10, 20);
    cil1->ra = 10;
    cil1->ke = 0;
    cil1->ior = 1.5;
    // vec_objetos.emplace_back(cil1);

    Esfera *esf4 = new Esfera;
    esf4->cen = vec3(5, 20, 20);
    esf4->rad = 2;
    esf4->color = vec3(1, 1, 1);
    esf4->kd = 0.9;
    esf4->ke = 0.9;
    // esf4->kr = 0.9;
    esf4->n = 16;
    vec_objetos.emplace_back(esf4);

    cam.Renderizar(luz, vec_objetos);
}