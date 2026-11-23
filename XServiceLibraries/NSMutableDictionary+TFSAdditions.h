//
#ifndef NSMutableDictionary_TFSAdditions_h
#define NSMutableDictionary_TFSAdditions_h
@import Foundation;

@interface NSMutableDictionary (TFSAdditions)

/* instance methods */
- (void)tip_removeObjectsForCaseInsensitiveKey:(id)key;
- (void)tip_setObject:(id)object forCaseInsensitiveKey:(id)key;
- (void)tip_makeAllKeysLowercase;
- (void)tip_makeAllKeysUppercase;
- (void)tnl_removeObjectsForCaseInsensitiveKey:(id)key;
- (void)tnl_setObject:(id)object forCaseInsensitiveKey:(id)key;
- (void)tnl_makeAllKeysLowercase;
- (void)tnl_makeAllKeysUppercase;
- (void)tfs_setObjectIfNotNil:(id)nil forKey:(id)key;
- (void)tfs_setObjectIfNotNil:(id)nil forKeyIfNotNil:(id)nil;
- (id)tfs_nonnullMutableArrayForKey:(id)key;
- (id)tfs_nonnullMutableDictionaryForKey:(id)key;
- (id)tfs_nonnullMutableSetForKey:(id)key;
- (id)_tfs_arrayForKey:(id)key;

@end

#endif /* NSMutableDictionary_TFSAdditions_h */
