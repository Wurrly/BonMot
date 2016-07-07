Pod::Spec.new do |s|
  s.name             = "BonMot-Wurrly"
  s.version          = "5.0.0"
  s.summary          = "An Objective-C attributed string generation library."
  s.description      = <<-DESC
  BonMot removes all the mystery from creating beautiful, powerful attributed strings on iOS.
                       DESC
  s.homepage         = "https://github.com/Wurrly/BonMot.git"
  s.license          = 'MIT'
  s.author           = { "Zev Eisenberg" => "zev.eisenberg@raizlabs.com" }
  s.source           = { :git => "https://github.com/Wurrly/BonMot.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/ZevEisenberg'

  s.platform     = :ios, '8.0'
  s.requires_arc = true

  s.frameworks = 'UIKit','CoreText'

  s.default_subspec = 'Core'

  s.subspec 'Core' do |sp|
    sp.source_files = 'Pod', 'Pod/Classes/**/*'
    sp.private_header_files = "Pod/Classes/*_Private.h"
  end

  s.subspec 'UIKit' do |sp|
    sp.source_files = 'Pod/UIKit', 'Pod/UIKit/Classes/**/*'
    sp.dependency 'BonMot/Core'
  end
end
