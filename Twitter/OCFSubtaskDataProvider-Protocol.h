//
#ifndef OCFSubtaskDataProvider_Protocol_h
#define OCFSubtaskDataProvider_Protocol_h
@import Foundation;

@protocol OCFSubtaskDataProvider

@required

/* required instance methods */
- (id)objectForKey:(id)key inSubtaskWithID:(id)id defaultValue:(id)value;
- (id)stringForKey:(id)key inSubtaskWithID:(id)id;
- (id)imageForKey:(id)key inSubtaskWithID:(id)id;
- (id)dateForKey:(id)key inSubtaskWithID:(id)id;
- (long long)integerForKey:(id)key inSubtaskWithID:(id)id defaultValue:(long long)value;
- (_Bool)boolForKey:(id)key inSubtaskWithID:(id)id defaultValue:(_Bool)value;

@optional

@end

#endif /* OCFSubtaskDataProvider_Protocol_h */
