

Pod::Spec.new do |s|

  s.name         = "YLUKitExtension"
  s.version      = "1.0.0"
  s.summary      = "KitExtension"
  s.homepage     = "http://www.jianshu.com/users/d2c069de1a7d"

  s.license      = { :type => "MIT", :file => "LICENSE" }

  s.author       = { "Lin" => "18253561530@163.com" }

  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/GuiFoA/YLUKitExtension.git", :tag => "#{s.version}" }

  s.vendored_frameworks = 'UKitExtension.framework'

  s.requires_arc = true


end
