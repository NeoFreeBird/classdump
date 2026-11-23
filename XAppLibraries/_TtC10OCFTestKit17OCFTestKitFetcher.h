//
#ifndef _TtC10OCFTestKit17OCFTestKitFetcher_h
#define _TtC10OCFTestKit17OCFTestKitFetcher_h
@import Foundation;

@class NSObject;

@interface OCFTestKit.OCFTestKitFetcher : NSObject // (Swift)

/* class methods */
+ (id)dataForResource:(id)resource ofType:(id)type;
+ (id)dictionaryFromJSONResource:(id)jsonresource;

/* instance methods */
- (id)init;

@end

#endif /* _TtC10OCFTestKit17OCFTestKitFetcher_h */
