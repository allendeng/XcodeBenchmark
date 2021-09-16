source = 'https://cdn.cocoapods.org/'
minimum_target = '14.5'

platform :ios, minimum_target

target 'XcodeBenchmark' do
  use_frameworks!
  inhibit_all_warnings!
  
  # Firebase
  pod 'Firebase/Database'
  pod 'Firebase/RemoteConfig'
  pod 'Firebase/Crashlytics'
  pod 'Firebase/Analytics'
  pod 'Firebase/Messaging'
  pod 'FirebaseFirestoreSwift'
  pod 'Firebase/Storage'
  pod 'Firebase/Performance'
  
  # Networking
  pod 'AFNetworking', '~> 3.1.0'
  pod 'SDWebImage', '~> 3.7'
  pod 'Moya', '~> 14.0'
  pod 'Starscream', '~> 4.0.0'
  
  # Core
  pod 'SwiftyJSON', '~> 4.0'
  pod 'Realm', '~> 5.3.4'
  pod 'MagicalRecord', :git => 'https://github.com/magicalpanda/MagicalRecord'
  pod 'RxBluetoothKit'
  pod 'ReactiveCocoa', '~> 10.1'
  pod 'CryptoSwift', '~> 1.4.0'
  pod 'R.swift.Library'
  pod 'ObjectMapper'
  
  pod 'TRON', '~> 5.0.0'
  pod 'DTCollectionViewManager', '~> 8.0.0'
  pod 'DTTableViewManager', '~> 8.0.0'
  pod 'Ariadne'
  pod 'LoadableViews'
  
  pod 'SwiftDate', '~> 5.0'
  pod 'SwiftyBeaver'
  
  # UI
  pod 'Hero'
  pod 'SVProgressHUD'
  pod 'Eureka', '~> 5.3.2'
  pod 'IQKeyboardManagerSwift'
  pod 'Macaw', '0.9.7'
  pod 'MJRefresh'
  pod 'FMDB'
  pod 'UMengAnalytics'
  pod 'CocoaLumberjack'
  pod 'MWPhotoBrowser', '~> 2.1.2'
  pod 'WCDB'
  pod 'YYText'

  # Layout
  pod 'SnapKit', '~> 5.0.0'
  pod 'Masonry'
  pod 'MJExtension'

  # Google
  pod 'GoogleMaps'
  pod 'GooglePlaces'
  pod 'Google-Mobile-Ads-SDK'
  pod 'GoogleSignIn'

  # Social
  pod 'VK-ios-sdk'
  pod 'FacebookCore'
  pod 'FacebookLogin'
  pod 'FacebookShare'

  # 全能tabBarController
  pod 'TLTabBarController', :git => 'https://github.com/tbl00c/TLTabBarController.git', :tag => '0.0.6'
#    pod 'TLTabBarController', :path => '~/TLPods/TLTabBarController'

  # Bug修复版JZ
  pod 'JZNavigationExtension', :git => 'https://github.com/tbl00c/JZNavigationExtension.git', :tag => '4.0'
end

post_install do |pi|
    pi.pods_project.targets.each do |t|
        t.build_configurations.each do |config|
            config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = minimum_target
        end
    end
end
