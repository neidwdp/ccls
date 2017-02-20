void called(int a);

int gen() { return 1; }

void foo() {
  called(gen() * gen());
}

/*
OUTPUT:
{
  "types": [],
  "functions": [{
      "id": 0,
      "usr": "c:@F@called#I#",
      "short_name": "called",
      "qualified_name": "called",
      "callers": ["2@tests/foobar.cc:6:3"],
      "all_uses": ["tests/foobar.cc:1:6", "tests/foobar.cc:6:3"]
    }, {
      "id": 1,
      "usr": "c:@F@gen#",
      "short_name": "gen",
      "qualified_name": "gen",
      "definition": "tests/foobar.cc:3:5",
      "callers": ["2@tests/foobar.cc:6:10", "2@tests/foobar.cc:6:18"],
      "all_uses": ["tests/foobar.cc:3:5", "tests/foobar.cc:6:10", "tests/foobar.cc:6:18"]
    }, {
      "id": 2,
      "usr": "c:@F@foo#",
      "short_name": "foo",
      "qualified_name": "foo",
      "definition": "tests/foobar.cc:5:6",
      "callees": ["0@tests/foobar.cc:6:3", "1@tests/foobar.cc:6:10", "1@tests/foobar.cc:6:18"],
      "all_uses": ["tests/foobar.cc:5:6"]
    }],
  "variables": []
}
*/