//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFSubtaskDataReference_h
#define OCFSubtaskDataReference_h
@import Foundation;

@class NSObject, NSString;

@interface OCFSubtaskDataReference : NSObject

@property (readonly, nonatomic) NSString *subtaskID;
@property (readonly, nonatomic) NSString *key;

/* class methods */
+ (void)executeBlock:(id /* block */)block withAllowedSubtaskIDs:(id)ids;
+ (id)_tfs_allowedSubtaskIDStack;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFSubtaskDataReference_h */
