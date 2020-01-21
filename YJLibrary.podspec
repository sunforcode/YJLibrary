#
# Be sure to run `pod lib lint YJLibrary.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'YJLibrary'
  s.version          = '0.1.0'
  s.summary          = 'sunyongjideku'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = 'my library yong  yu ceshi lai shiyong de '

  s.homepage         = 'https://github.com/sunforcode/YJLibrary'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '363148025@qq.com' => '363148025@qq.com' }
  s.source           = { :git => 'https://github.com/sunforcode/YJLibrary.git', :tag => s.version.to_s , :submodules => true}
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'YJLibrary/Classes/**/*.{h,m}'
  
  # s.resource_bundles = {
  #   'YJLibrary' => ['YJLibrary/Assets/*.png']
  # }
  s.subspec 'Source' do |ss|
    ss.source_files = 'YJLibrary/Classes/Source/*.{h,m}'
  end

  # s.public_header_files = 'YJLibrary/Classes/YJLibrary.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
    # s.subspec 'Serialization' do |ss|
    # ss.source_files = 'AFNetworking/AFURL{Request,Response}Serialization.{h,m}'
    # ss.public_header_files = 'AFNetworking/AFURL{Request,Response}Serialization.h'
    # ss.watchos.frameworks = 'MobileCoreServices', 'CoreGraphics'
    # ss.ios.frameworks = 'MobileCoreServices', 'CoreGraphics'
    # ss.osx.frameworks = 'CoreServices'
  # end
end
