Pod::Spec.new do |s|
  s.name                   = 'YJLibrary'
  s.version                = '200325.14.33'
  s.description            = 'generate by apic'
  s.summary                = 'The sdk for XCFPTApiKit generate by apic.'
  s.homepage               = 'https://github.com/xiachufang/pt-xcfapi-client-ios'
  s.license                = { :type => 'MIT', :file => 'LICENSE' }
  s.author                 = { 'Four' => 'wujianming@xiachufang.com' }
  s.source                 = { :git => 'https://github.com/xiachufang/pt-xcfapi-client-ios', :tag => s.version.to_s }
  s.ios.deployment_target  = '8.0'
  s.frameworks             = 'Foundation'
  s.source_files           = 'XCFPTApiKit/**/*'
  s.requires_arc           = true
  s.dependency 'AFNetworking'
  s.dependency 'YYModel'
  s.dependency 'ReactiveObjC'
end

