A continuación te presentamos el DER que vamos a estar utilizando durante las proximas guías:

<div class='mu-erd'
  data-entities='{
    "Entity_1": {
      "ent1_id": {
        "type": "Integer",
        "pk": true
      },
      "ent2_id": {
        "type": "Integer",
        "pk": true,
        "fk": {
          "to": { "entity": "Entity_2", "column": "ent2_id" },
          "type": "one_to_one"
        }
      },
      "ent1_description": {
        "type": "Varchar"
      }
    },
    "Entity_2": {
      "ent2_id": {
        "type": "Integer",
        "pk": true
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