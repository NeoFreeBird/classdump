//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XApiGlobalHeaderFieldsProvider_Protocol_h
#define XApiGlobalHeaderFieldsProvider_Protocol_h
@import Foundation;

@protocol XApiGlobalHeaderFieldsProvider

@required

/* required instance methods */
- (id)headerFieldsForURL:(id)url;

@optional

@end

#endif /* XApiGlobalHeaderFieldsProvider_Protocol_h */
