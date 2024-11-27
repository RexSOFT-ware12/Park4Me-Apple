platform :ios, '13.0'

source 'https://cdn.cocoapods.org/'

require_relative './plugins.rb'

target 'Park4Me' do
  use_frameworks!

  # Use local paths for dependencies
  pod 'GoNativeCore', :path => 'Pods/GoNativeCore'
  pod 'MedianIcons', :path => 'Pods/MedianIcons'
  pod 'SSZipArchive', :path => 'Pods/SSZipArchive'
  
  # Remote pod
  pod 'OneSignal', '~> 3.12'

  use_plugins!

  target 'MedianIOSTests' do
    inherit! :search_paths
    # Pods for testing
  end
end

post_install do |installer|
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      config.build_settings.delete 'IPHONEOS_DEPLOYMENT_TARGET'
      config.build_settings['BUILD_LIBRARY_FOR_DISTRIBUTION'] = 'YES'
      config.build_settings['CODE_SIGNING_ALLOWED'] = 'NO'
    end
  end
end

target 'OneSignalNotificationServiceExtension' do
  use_frameworks!
  pod 'OneSignal', '~> 3.12'
end
