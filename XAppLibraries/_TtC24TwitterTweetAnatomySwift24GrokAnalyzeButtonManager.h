//
#ifndef _TtC24TwitterTweetAnatomySwift24GrokAnalyzeButtonManager_h
#define _TtC24TwitterTweetAnatomySwift24GrokAnalyzeButtonManager_h
@import Foundation;

@class NSObject;

@interface TwitterTweetAnatomySwift.GrokAnalyzeButtonManager : NSObject // (Swift)

/* class methods */
+ (id)makeContextMenuWithShowOtherOption:(_Bool)option handler:(id /* block */)handler;
+ (_Bool)shouldShowGrokAnalyzeButtonForAuthorViewWithViewModel:(id)model account:(id)account options:(unsigned long long)options displayType:(long long)type;

/* instance methods */
- (id)init;

@end

#endif /* _TtC24TwitterTweetAnatomySwift24GrokAnalyzeButtonManager_h */
