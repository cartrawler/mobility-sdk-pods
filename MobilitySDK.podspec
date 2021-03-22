Pod::Spec.new do |s|

s.name         = "MobilitySDK"
s.version      = "0.0.27"
s.summary      = "Mobility iOS SDK"
s.description  = <<-DESC
    A Mobility solution
DESC

s.homepage     = "http://cartrawler.com"

s.license      = {
:type => 'Commercial',
:text => <<-LICENSE
Copyright (C) 2016 Cartrawler
LICENSE
}

s.author             = { "fmcmorrow" => "" }
s.platform     = :ios
s.platform     = :ios, "9.0"
s.source       = { :git => "https://github.com/cartrawler/mobility-sdk-pods", :tag => "#{s.version}" }

s.ios.vendored_frameworks = 'MobilitySDK.framework'

s.requires_arc = true

end
