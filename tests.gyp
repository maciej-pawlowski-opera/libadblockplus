{
  'targets': [{
    'target_name': 'tests',
    'type': 'executable',
    'xcode_settings': {},
    'dependencies': [
      'googletest.gyp:googlemock',
      'googletest.gyp:googletest_main',
      'libadblockplus.gyp:libadblockplus'
    ],
    'sources': [
      'test/AsyncExecutor.cpp',
      'test/BaseJsTest.h',
      'test/BaseJsTest.cpp',
      'test/AppInfoJsObject.cpp',
      'test/ConsoleJsObject.cpp',
      'test/DefaultFileSystem.cpp',
      'test/FileSystemJsObject.cpp',
      'test/FilterEngine.cpp',
      'test/GlobalJsObject.cpp',
      'test/JsEngine.cpp',
      'test/JsValue.cpp',
      'test/MockFileSystem.h',
      'test/MockLogSystem.h',
      'test/MockTimer.h',
      'test/MockWebRequest.h',
      'test/Notification.cpp',
      'test/Prefs.cpp',
      'test/ReferrerMapping.cpp',
      'test/UpdateCheck.cpp',
      'test/WebRequest.cpp'
    ],
    'msvs_settings': {
      'VCLinkerTool': {
        'SubSystem': '1',   # Console
        'EntryPointSymbol': 'mainCRTStartup',
      },
    },
  }]
}
