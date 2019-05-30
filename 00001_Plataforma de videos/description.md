A continuación te presentamos el DER que vamos a estar utilizando durante las proximas guías:

<div class='mu-erd'
  data-entities='{
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
    "Entity_3": {
      "ent3_id": {
        "type": "Integer",
        "pk": true
      },
      "ent2_id": {
        "type": "Integer",
        "pk": true,
        "fk": {
          "to": { "entity": "Entity_2", "column": "ent2_id" },
          "type": "many_to_one"
        }
      },
      "ent1_description": {
        "type": "Varchar"
      }
    }
  }'>
</div>