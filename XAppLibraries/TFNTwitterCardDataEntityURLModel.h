//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCardDataEntityURLModel_h
#define TFNTwitterCardDataEntityURLModel_h
@import Foundation;

@class NSObject, NSString, TFSTwitterEntityURL;

@interface TFNTwitterCardDataEntityURLModel : NSObject

@property (readonly, nonatomic) TFSTwitterEntityURL *entityURL;
@property (readonly, nonatomic) NSString *displayURL;
@property (readonly, nonatomic) NSString *customTitle;
@property (readonly, nonatomic) NSString *expandedURL;
@property (readonly, nonatomic) NSString *URL;

/* class methods */
+ (id)entityURLFromCardDataSource:(id)source;

/* instance methods */
- (id)init;
- (id)initWithCardContext:(id)context;

@end

#endif /* TFNTwitterCardDataEntityURLModel_h */
