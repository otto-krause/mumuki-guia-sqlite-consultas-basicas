A continuación te presentamos el DER que vamos a estar utilizando durante las proximas guías:

<div class='mu-erd'
  data-entities='{
  "Usuario": {
      "idUsuario": {
        "type": "Integer",
        "pk": true
      },
      "username": {
        "type": "Varchar"
      },
      "nombre": {
        "type": "Varchar"
      },
      "apellido": {
        "type": "Varchar"
      },
      "mail": {
        "type": "Varchar"
      }
    },
    "Video": {
      "idVideo": {
        "type": "Integer",
        "pk": true
      },
      "usuario": {
        "type": "Integer",
        "pk": false,
        "fk": {
          "to": { "entity": "Usuario", "column": "idUsuario" },
          "type": "many_to_one"
        }
      },
      "link": {
        "type": "Varchar"
      },
      "duracion": {
        "type": "Integer"
      },
      "likes": {
        "type": "Integer"
      },
      "titulo": {
        "type": "Varchar"
      }
    },
    "VIDEO_LISTA": {
      "idVideo": {
        "type": "Integer",
        "pk": true,
        "fk": {
          "to": { "entity": "Video", "column": "idVideo" },
          "type": "many_to_one"
        }
      },
      "idLista": {
        "type": "Integer",
        "pk": true,
        "fk": {
          "to": { "entity": "ListaDeReproduccion", "column": "idLista" },
          "type": "many_to_one"
        }
      }
    },
    "ListaDeReproduccion": {
      "idLista": {
        "type": "Integer",
        "pk": true
      },
      "idUsuario": {
        "type": "Integer",
        "fk": {
          "to": { "entity": "Usuario", "column": "idUsuario" },
          "type": "many_to_one"
        }
      },
      "titulo": {
        "type": "Varchar"
      },
      "cantidadDeVideos": {
        "type": "Integer"
      }
    }
  }'>
</div>