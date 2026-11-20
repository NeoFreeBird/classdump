//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSCScribeContextRepresentable_Protocol_h
#define TSCScribeContextRepresentable_Protocol_h
@import Foundation;

@class NSDictionary, NSString;

@protocol TSCScribeContextRepresentable

@required

@property (nonatomic, readonly) NSString *page;
@property (nonatomic, readonly) NSString *section;
@property (nonatomic, readonly) NSString *component;
@property (nonatomic, readonly) NSString *element;
@property (nonatomic, readonly) NSDictionary *parameters;

@optional

@end

#endif /* TSCScribeContextRepresentable_Protocol_h */
