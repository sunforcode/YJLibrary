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
  s.source_files           = 'XCFPTApiKit/*.{h,m}'
 
      s.subspec 'service' do |ss|
          ss.source_files = 'XCFPTApiKit/service/*.{h,m}'
     
      end

 
      s.subspec 'viewmodels' do |sv|
          sv.source_files = 'XCFPTApiKit/viewmodels/*.{h,m}'
     
        sv.subspec 'equipment' do |sve|
            sve.source_files = 'XCFPTApiKit/viewmodels/equipment/*.{h,m}'
     
        end

 
        sv.subspec 'ordercomment' do |svo|
            svo.source_files = 'XCFPTApiKit/viewmodels/ordercomment/*.{h,m}'
     
        end

 
        sv.subspec 'recipe' do |svr|
            svr.source_files = 'XCFPTApiKit/viewmodels/recipe/*.{h,m}'
     
        end

 
        sv.subspec 'markettab' do |svm|
            svm.source_files = 'XCFPTApiKit/viewmodels/markettab/*.{h,m}'
     
        end

 
        sv.subspec 'homepage' do |svh|
            svh.source_files = 'XCFPTApiKit/viewmodels/homepage/*.{h,m}'
     
        end

 
        sv.subspec 'chucode' do |svc|
            svc.source_files = 'XCFPTApiKit/viewmodels/chucode/*.{h,m}'
     
        end

 
        sv.subspec 'experiment' do |sve|
            sve.source_files = 'XCFPTApiKit/viewmodels/experiment/*.{h,m}'
     
        end

 
        sv.subspec 'pkx' do |svp|
            svp.source_files = 'XCFPTApiKit/viewmodels/pkx/*.{h,m}'
     
        end

 
        sv.subspec 'courserankinglist' do |svc|
            svc.source_files = 'XCFPTApiKit/viewmodels/courserankinglist/*.{h,m}'
     
        end

 
        sv.subspec 'freepubliccourse' do |svf|
            svf.source_files = 'XCFPTApiKit/viewmodels/freepubliccourse/*.{h,m}'
     
        end

 
        sv.subspec 'coursefreeforlimitedtime' do |svc|
            svc.source_files = 'XCFPTApiKit/viewmodels/coursefreeforlimitedtime/*.{h,m}'
     
        end

 
        sv.subspec 'coursevoucher' do |svc|
            svc.source_files = 'XCFPTApiKit/viewmodels/coursevoucher/*.{h,m}'
     
        end

 
        sv.subspec 'questionnaire' do |svq|
            svq.source_files = 'XCFPTApiKit/viewmodels/questionnaire/*.{h,m}'
     
        end

 
        sv.subspec 'dish' do |svd|
            svd.source_files = 'XCFPTApiKit/viewmodels/dish/*.{h,m}'
     
        end

 
        sv.subspec 'event' do |sve|
            sve.source_files = 'XCFPTApiKit/viewmodels/event/*.{h,m}'
     
        end

 
        sv.subspec 'course' do |svc|
            svc.source_files = 'XCFPTApiKit/viewmodels/course/*.{h,m}'
     
        end

 
        sv.subspec 'topcoursespurchasedbyconsumers' do |svt|
            svt.source_files = 'XCFPTApiKit/viewmodels/topcoursespurchasedbyconsumers/*.{h,m}'
     
        end

 
        sv.subspec 'question' do |svq|
            svq.source_files = 'XCFPTApiKit/viewmodels/question/*.{h,m}'
     
        end

 
        sv.subspec 'welfare' do |svw|
            svw.source_files = 'XCFPTApiKit/viewmodels/welfare/*.{h,m}'
     
        end

 
        sv.subspec 'classroomtab' do |svc|
            svc.source_files = 'XCFPTApiKit/viewmodels/classroomtab/*.{h,m}'
     
        end

 
        sv.subspec 'similaressay' do |svs|
            svs.source_files = 'XCFPTApiKit/viewmodels/similaressay/*.{h,m}'
     
        end

 
        sv.subspec 'courserefresh' do |svc|
            svc.source_files = 'XCFPTApiKit/viewmodels/courserefresh/*.{h,m}'
     
        end

 
        sv.subspec 'interestedtag' do |svi|
            svi.source_files = 'XCFPTApiKit/viewmodels/interestedtag/*.{h,m}'
     
        end

 
        sv.subspec 'search' do |svs|
            svs.source_files = 'XCFPTApiKit/viewmodels/search/*.{h,m}'
     
        end

 
        sv.subspec 'similarrecipe' do |svs|
            svs.source_files = 'XCFPTApiKit/viewmodels/similarrecipe/*.{h,m}'
     
        end

 
        sv.subspec 'feeds' do |svf|
            svf.source_files = 'XCFPTApiKit/viewmodels/feeds/*.{h,m}'
     
        end

 
        sv.subspec 'sharerecipe' do |svs|
            svs.source_files = 'XCFPTApiKit/viewmodels/sharerecipe/*.{h,m}'
     
        end

 
        sv.subspec 'advertiser' do |sva|
            sva.source_files = 'XCFPTApiKit/viewmodels/advertiser/*.{h,m}'
     
        end

 
        sv.subspec 'theme' do |svt|
            svt.source_files = 'XCFPTApiKit/viewmodels/theme/*.{h,m}'
     
        end

 
        sv.subspec 'vodvideo' do |svv|
            svv.source_files = 'XCFPTApiKit/viewmodels/vodvideo/*.{h,m}'
     
        end

 
        sv.subspec 'essay' do |sve|
            sve.source_files = 'XCFPTApiKit/viewmodels/essay/*.{h,m}'
     
        end

 
        sv.subspec 'board' do |svb|
            svb.source_files = 'XCFPTApiKit/viewmodels/board/*.{h,m}'
     
        end

 
        sv.subspec 'coursetag' do |svc|
            svc.source_files = 'XCFPTApiKit/viewmodels/coursetag/*.{h,m}'
     
        end

 
        sv.subspec 'coursedishes' do |svc|
            svc.source_files = 'XCFPTApiKit/viewmodels/coursedishes/*.{h,m}'
     
        end

 
        sv.subspec 'recipedishes' do |svr|
            svr.source_files = 'XCFPTApiKit/viewmodels/recipedishes/*.{h,m}'
     
        end

 
        sv.subspec 'recipeappraisal' do |svr|
            svr.source_files = 'XCFPTApiKit/viewmodels/recipeappraisal/*.{h,m}'
     
        end

 
        sv.subspec 'ad' do |sva|
            sva.source_files = 'XCFPTApiKit/viewmodels/ad/*.{h,m}'
     
        end

 
        sv.subspec 'samecityrecommendations' do |svs|
            svs.source_files = 'XCFPTApiKit/viewmodels/samecityrecommendations/*.{h,m}'
     
        end

 
        sv.subspec 'recipefeeds' do |svr|
            svr.source_files = 'XCFPTApiKit/viewmodels/recipefeeds/*.{h,m}'
     
        end

 
        sv.subspec 'recipequestion' do |svr|
            svr.source_files = 'XCFPTApiKit/viewmodels/recipequestion/*.{h,m}'
     
        end

 
        sv.subspec 'recipepagemetainfo' do |svr|
            svr.source_files = 'XCFPTApiKit/viewmodels/recipepagemetainfo/*.{h,m}'
     
        end

 
        sv.subspec 'courserate' do |svc|
            svc.source_files = 'XCFPTApiKit/viewmodels/courserate/*.{h,m}'
     
        end

 
        sv.subspec 'notification' do |svn|
            svn.source_files = 'XCFPTApiKit/viewmodels/notification/*.{h,m}'
     
        end

 
        sv.subspec 'similarquestion' do |svs|
            svs.source_files = 'XCFPTApiKit/viewmodels/similarquestion/*.{h,m}'
     
        end

 
        sv.subspec 'ec' do |sve|
            sve.source_files = 'XCFPTApiKit/viewmodels/ec/*.{h,m}'
     
        end

 
        sv.subspec 'classroom' do |svc|
            svc.source_files = 'XCFPTApiKit/viewmodels/classroom/*.{h,m}'
     
        end

 
        sv.subspec 'coursefeedback' do |svc|
            svc.source_files = 'XCFPTApiKit/viewmodels/coursefeedback/*.{h,m}'
     
        end

 
        sv.subspec 'account' do |sva|
            sva.source_files = 'XCFPTApiKit/viewmodels/account/*.{h,m}'
     
        end

 
        sv.subspec 'discoverrecipe' do |svd|
            svd.source_files = 'XCFPTApiKit/viewmodels/discoverrecipe/*.{h,m}'
     
        end

 
      end

 
      s.subspec 'models' do |sm|
          sm.source_files = 'XCFPTApiKit/models/*.{h,m}'
     
        sm.subspec 'equipment' do |sme|
            sme.source_files = 'XCFPTApiKit/models/equipment/*.{h,m}'
     
        end

 
        sm.subspec 'chucode' do |smc|
            smc.source_files = 'XCFPTApiKit/models/chucode/*.{h,m}'
     
        end

 
        sm.subspec 'questionnaire' do |smq|
            smq.source_files = 'XCFPTApiKit/models/questionnaire/*.{h,m}'
     
        end

 
        sm.subspec 'welfare' do |smw|
            smw.source_files = 'XCFPTApiKit/models/welfare/*.{h,m}'
     
        end

 
        sm.subspec 'similaressay' do |sms|
            sms.source_files = 'XCFPTApiKit/models/similaressay/*.{h,m}'
     
        end

 
        sm.subspec 'interestedtag' do |smi|
            smi.source_files = 'XCFPTApiKit/models/interestedtag/*.{h,m}'
     
        end

 
        sm.subspec 'search' do |sms|
            sms.source_files = 'XCFPTApiKit/models/search/*.{h,m}'
     
        end

 
        sm.subspec 'similarrecipe' do |sms|
            sms.source_files = 'XCFPTApiKit/models/similarrecipe/*.{h,m}'
     
        end

 
        sm.subspec 'advertiser' do |sma|
            sma.source_files = 'XCFPTApiKit/models/advertiser/*.{h,m}'
     
          sma.subspec 'ad' do |smaa|
              smaa.source_files = 'XCFPTApiKit/models/ad/ad/*.{h,m}'
     
          end

 
          sma.subspec 'common' do |smac|
              smac.source_files = 'XCFPTApiKit/models/ad/common/*.{h,m}'
     
          end

 
        end

 
        sm.subspec 'recipeappraisal' do |smr|
            smr.source_files = 'XCFPTApiKit/models/recipeappraisal/*.{h,m}'
     
        end

 
        sm.subspec 'waterfallrecommendation' do |smw|
            smw.source_files = 'XCFPTApiKit/models/waterfallrecommendation/*.{h,m}'
     
        end

 
        sm.subspec 'notification' do |smn|
            smn.source_files = 'XCFPTApiKit/models/notification/*.{h,m}'
     
        end

 
        sm.subspec 'question' do |smq|
            smq.source_files = 'XCFPTApiKit/models/question/*.{h,m}'
     
        end

 
        sm.subspec 'essay' do |sme|
            sme.source_files = 'XCFPTApiKit/models/essay/*.{h,m}'
     
        end

 
        sm.subspec 'theme' do |smt|
            smt.source_files = 'XCFPTApiKit/models/theme/*.{h,m}'
     
        end

 
        sm.subspec 'post' do |smp|
            smp.source_files = 'XCFPTApiKit/models/post/*.{h,m}'
     
        end

 
        sm.subspec 'hybridlist' do |smh|
            smh.source_files = 'XCFPTApiKit/models/hybridlist/*.{h,m}'
     
        end

 
        sm.subspec 'ec' do |sme|
            sme.source_files = 'XCFPTApiKit/models/ec/*.{h,m}'
     
          sme.subspec 'commentprompt' do |smec|
              smec.source_files = 'XCFPTApiKit/models/ec/commentprompt/*.{h,m}'
     
          end

 
          sme.subspec 'markettab' do |smem|
              smem.source_files = 'XCFPTApiKit/models/ec/markettab/*.{h,m}'
     
          end

 
          sme.subspec 'shop' do |smes|
              smes.source_files = 'XCFPTApiKit/models/ec/shop/*.{h,m}'
     
          end

 
          sme.subspec 'review' do |smer|
              smer.source_files = 'XCFPTApiKit/models/ec/review/*.{h,m}'
     
          end

 
          sme.subspec 'goods' do |smeg|
              smeg.source_files = 'XCFPTApiKit/models/ec/goods/*.{h,m}'
     
          end

 
        end

 
        sm.subspec 'dish' do |smd|
            smd.source_files = 'XCFPTApiKit/models/dish/*.{h,m}'
     
        end

 
        sm.subspec 'event' do |sme|
            sme.source_files = 'XCFPTApiKit/models/event/*.{h,m}'
     
        end

 
        sm.subspec 'comment' do |smc|
            smc.source_files = 'XCFPTApiKit/models/comment/*.{h,m}'
     
        end

 
        sm.subspec 'course' do |smc|
            smc.source_files = 'XCFPTApiKit/models/course/*.{h,m}'
     
        end

 
        sm.subspec 'board' do |smb|
            smb.source_files = 'XCFPTApiKit/models/board/*.{h,m}'
     
        end

 
        sm.subspec 'ad' do |sma|
            sma.source_files = 'XCFPTApiKit/models/ad/*.{h,m}'
     
        end

 
        sm.subspec 'chustudio' do |smc|
            smc.source_files = 'XCFPTApiKit/models/chustudio/*.{h,m}'
     
          smc.subspec 'coursevoucher' do |smcc|
              smcc.source_files = 'XCFPTApiKit/models/chustudio/coursevoucher/*.{h,m}'
     
          end

 
          smc.subspec 'classroomtab' do |smcc|
              smcc.source_files = 'XCFPTApiKit/models/chustudio/classroomtab/*.{h,m}'
     
          end

 
          smc.subspec 'coursetag' do |smcc|
              smcc.source_files = 'XCFPTApiKit/models/chustudio/coursetag/*.{h,m}'
     
          end

 
          smc.subspec 'courserate' do |smcc|
              smcc.source_files = 'XCFPTApiKit/models/chustudio/courserate/*.{h,m}'
     
          end

 
          smc.subspec 'coursefeedback' do |smcc|
              smcc.source_files = 'XCFPTApiKit/models/chustudio/coursefeedback/*.{h,m}'
     
          end

 
        end

 
        sm.subspec 'usersys' do |smu|
          smu.source_files = 'XCFPTApiKit/models/usersys/*.{h,m}'
     
            smu.subspec 'accountdeactivationapplication' do |smua|
                smua.source_files = 'XCFPTApiKit/models/usersys/accountdeactivationapplication/*.{h,m}'
       
            end

 
        end

 
        sm.subspec 'recipe' do |smr|
            smr.source_files = 'XCFPTApiKit/models/recipe/*.{h,m}'
     
        end

 
        sm.subspec 'user' do |smu|
            smu.source_files = 'XCFPTApiKit/models/user/*.{h,m}'
     
        end

 
        sm.subspec 'common' do |smc|
            smc.source_files = 'XCFPTApiKit/models/common/*.{h,m}'
     
        end
  end


end
