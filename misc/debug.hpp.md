---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"misc/debug.hpp\"\n\n#define _GLIBCXX_DEBUG 1\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#define fastIO() void()\n#define debug(...) \\\n    _color.emplace_back(\"\
    \\u001b[31m\"), \\\n    fprintf(stderr, \"%sAt [%s], line %d: (%s) = \", _color.back().c_str(),\
    \ __FUNCTION__, __LINE__, #__VA_ARGS__), \\\n    _do(__VA_ARGS__), _color.pop_back(),\
    \ \\\n    fprintf(stderr, \"%s\", _color.back().c_str())\n#define print(...) \\\
    \n    fprintf(stdout, \"%s\", \"\\u001b[36m\"), \\\n    _P(__VA_ARGS__), \\\n\
    \    fprintf(stdout, \"%s\", \"\\u001b[0m\")\n\ndeque<string> _color{\"\\u001b[0m\"\
    };\n\ntemplate <typename T> concept is_string = is_same_v<T, string&> or is_same_v<T,\
    \ const string&>;\ntemplate <typename T> concept is_iterable = requires (T _t)\
    \ { begin(_t); };\n\ntemplate <typename T> inline void _print_err(T &&_t);\ntemplate\
    \ <typename T> inline void _print_err(T &&_t) requires is_iterable<T> and (not\
    \ is_string<T>);\ntemplate <size_t I, typename ...U> inline typename enable_if<I\
    \ == sizeof...(U), void>::type _print_err(const tuple<U...> &);\ntemplate <size_t\
    \ I, typename ...U> inline typename enable_if<I <  sizeof...(U), void>::type _print_err(const\
    \ tuple<U...> &_t);\ntemplate <size_t I, typename ...U> inline typename enable_if<I\
    \ == sizeof...(U), void>::type _print_err(tuple<U...> &);\ntemplate <size_t I,\
    \ typename ...U> inline typename enable_if<I <  sizeof...(U), void>::type _print_err(tuple<U...>\
    \ &_t);\ntemplate <typename T, typename U> ostream& operator << (ostream &os,\
    \ const pair<T, U> &_tu);\n\ninline void _do() { cerr << \"\\n\"; }\ntemplate\
    \ <typename T> inline void _do(T &&_t) { _print_err(_t), cerr << \"\\n\"; }\n\
    template <typename T, typename ...U> inline void _do(T &&_t, U &&..._u) { _print_err(_t),\
    \ cerr << \", \", _do(_u...); }\n\ntemplate <typename T> inline void _print_err(T\
    \ &&_t) { cerr << _t; }\n\ntemplate <typename T> inline void _print_err(T &&_t)\
    \ requires is_iterable<T> and (not is_string<T>) {\n    string _tmp_color = _color.back();\n\
    \    ++_tmp_color[3], _color.emplace_back(_tmp_color);\n    cerr << _color.back()\
    \ << \"[\";\n    for (bool _first = true; auto &_x : _t) {\n        if (!_first)\
    \ cerr << \", \";\n        _print_err(_x), _first = false;\n    }\n    cerr <<\
    \ \"]\" << (_color.pop_back(), _color.back());\n}\n\ntemplate <typename T, typename\
    \ U> ostream& operator << (ostream &os, const pair<T, U> &_tu) {\n    string _tmp_color\
    \ = _color.back();\n    ++_tmp_color[3], _color.emplace_back(_tmp_color);\n  \
    \  cerr << _color.back() << \"(\";\n    _print_err(_tu.first), cerr << \", \"\
    , _print_err(_tu.second);\n    cerr << \")\" << (_color.pop_back(), _color.back());\n\
    \    return os;\n}\n\ntemplate <size_t I = 0, typename ...U> inline typename enable_if<I\
    \ == sizeof...(U), void>::type _print_err(const tuple<U...> &) {\n    cerr <<\
    \ \")\" << (_color.pop_back(), _color.back());\n}\n\ntemplate <size_t I = 0, typename\
    \ ...U> inline typename enable_if<I <  sizeof...(U), void>::type _print_err(const\
    \ tuple<U...> &_t) {\n    if (!I) {\n        string _tmp_color = _color.back();\n\
    \        ++_tmp_color[3], _color.emplace_back(_tmp_color);\n        cerr << _color.back();\n\
    \    }\n    cerr << (I ? \", \" : \"(\"), _print_err(get<I>(_t)), _print_err<I+1,\
    \ U...>(_t);\n}\n\ntemplate <size_t I = 0, typename ...U> inline typename enable_if<I\
    \ == sizeof...(U), void>::type _print_err(tuple<U...> &) {\n    cerr << \")\"\
    \ << (_color.pop_back(), _color.back());\n}\n\ntemplate <size_t I = 0, typename\
    \ ...U> inline typename enable_if<I <  sizeof...(U), void>::type _print_err(tuple<U...>\
    \ &_t) {\n    if (!I) {\n        string _tmp_color = _color.back();\n        ++_tmp_color[3],\
    \ _color.emplace_back(_tmp_color);\n        cerr << _color.back();\n    }\n  \
    \  cerr << (I ? \", \" : \"(\"), _print_err(get<I>(_t)), _print_err<I+1, U...>(_t);\n\
    }\n"
  code: "#pragma once\n\n#define _GLIBCXX_DEBUG 1\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n#define fastIO() void()\n#define debug(...) \\\n    _color.emplace_back(\"\
    \\u001b[31m\"), \\\n    fprintf(stderr, \"%sAt [%s], line %d: (%s) = \", _color.back().c_str(),\
    \ __FUNCTION__, __LINE__, #__VA_ARGS__), \\\n    _do(__VA_ARGS__), _color.pop_back(),\
    \ \\\n    fprintf(stderr, \"%s\", _color.back().c_str())\n#define print(...) \\\
    \n    fprintf(stdout, \"%s\", \"\\u001b[36m\"), \\\n    _P(__VA_ARGS__), \\\n\
    \    fprintf(stdout, \"%s\", \"\\u001b[0m\")\n\ndeque<string> _color{\"\\u001b[0m\"\
    };\n\ntemplate <typename T> concept is_string = is_same_v<T, string&> or is_same_v<T,\
    \ const string&>;\ntemplate <typename T> concept is_iterable = requires (T _t)\
    \ { begin(_t); };\n\ntemplate <typename T> inline void _print_err(T &&_t);\ntemplate\
    \ <typename T> inline void _print_err(T &&_t) requires is_iterable<T> and (not\
    \ is_string<T>);\ntemplate <size_t I, typename ...U> inline typename enable_if<I\
    \ == sizeof...(U), void>::type _print_err(const tuple<U...> &);\ntemplate <size_t\
    \ I, typename ...U> inline typename enable_if<I <  sizeof...(U), void>::type _print_err(const\
    \ tuple<U...> &_t);\ntemplate <size_t I, typename ...U> inline typename enable_if<I\
    \ == sizeof...(U), void>::type _print_err(tuple<U...> &);\ntemplate <size_t I,\
    \ typename ...U> inline typename enable_if<I <  sizeof...(U), void>::type _print_err(tuple<U...>\
    \ &_t);\ntemplate <typename T, typename U> ostream& operator << (ostream &os,\
    \ const pair<T, U> &_tu);\n\ninline void _do() { cerr << \"\\n\"; }\ntemplate\
    \ <typename T> inline void _do(T &&_t) { _print_err(_t), cerr << \"\\n\"; }\n\
    template <typename T, typename ...U> inline void _do(T &&_t, U &&..._u) { _print_err(_t),\
    \ cerr << \", \", _do(_u...); }\n\ntemplate <typename T> inline void _print_err(T\
    \ &&_t) { cerr << _t; }\n\ntemplate <typename T> inline void _print_err(T &&_t)\
    \ requires is_iterable<T> and (not is_string<T>) {\n    string _tmp_color = _color.back();\n\
    \    ++_tmp_color[3], _color.emplace_back(_tmp_color);\n    cerr << _color.back()\
    \ << \"[\";\n    for (bool _first = true; auto &_x : _t) {\n        if (!_first)\
    \ cerr << \", \";\n        _print_err(_x), _first = false;\n    }\n    cerr <<\
    \ \"]\" << (_color.pop_back(), _color.back());\n}\n\ntemplate <typename T, typename\
    \ U> ostream& operator << (ostream &os, const pair<T, U> &_tu) {\n    string _tmp_color\
    \ = _color.back();\n    ++_tmp_color[3], _color.emplace_back(_tmp_color);\n  \
    \  cerr << _color.back() << \"(\";\n    _print_err(_tu.first), cerr << \", \"\
    , _print_err(_tu.second);\n    cerr << \")\" << (_color.pop_back(), _color.back());\n\
    \    return os;\n}\n\ntemplate <size_t I = 0, typename ...U> inline typename enable_if<I\
    \ == sizeof...(U), void>::type _print_err(const tuple<U...> &) {\n    cerr <<\
    \ \")\" << (_color.pop_back(), _color.back());\n}\n\ntemplate <size_t I = 0, typename\
    \ ...U> inline typename enable_if<I <  sizeof...(U), void>::type _print_err(const\
    \ tuple<U...> &_t) {\n    if (!I) {\n        string _tmp_color = _color.back();\n\
    \        ++_tmp_color[3], _color.emplace_back(_tmp_color);\n        cerr << _color.back();\n\
    \    }\n    cerr << (I ? \", \" : \"(\"), _print_err(get<I>(_t)), _print_err<I+1,\
    \ U...>(_t);\n}\n\ntemplate <size_t I = 0, typename ...U> inline typename enable_if<I\
    \ == sizeof...(U), void>::type _print_err(tuple<U...> &) {\n    cerr << \")\"\
    \ << (_color.pop_back(), _color.back());\n}\n\ntemplate <size_t I = 0, typename\
    \ ...U> inline typename enable_if<I <  sizeof...(U), void>::type _print_err(tuple<U...>\
    \ &_t) {\n    if (!I) {\n        string _tmp_color = _color.back();\n        ++_tmp_color[3],\
    \ _color.emplace_back(_tmp_color);\n        cerr << _color.back();\n    }\n  \
    \  cerr << (I ? \", \" : \"(\"), _print_err(get<I>(_t)), _print_err<I+1, U...>(_t);\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: misc/debug.hpp
  requiredBy: []
  timestamp: '2024-10-08 01:20:28+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: misc/debug.hpp
layout: document
title: Debug Code
---
