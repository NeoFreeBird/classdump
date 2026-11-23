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
