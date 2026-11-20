//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSScribeTableColumn_h
#define TFSScribeTableColumn_h
@import Foundation;

@class NSObject, NSString;

@interface TFSScribeTableColumn : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *type;

/* instance methods */
- (id)initWithName:(id)name type:(id)type;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* TFSScribeTableColumn_h */
