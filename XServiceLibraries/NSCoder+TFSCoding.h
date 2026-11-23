//
#ifndef NSCoder_TFSCoding_h
#define NSCoder_TFSCoding_h
@import Foundation;

@interface NSCoder (TFSCoding)

/* instance methods */
- (id)tnl_decodeArrayOfItemsOfClass:(Class)_class forKey:(id)key;
- (id)tnl_decodeArrayOfItemsOfClasses:(id)classes forKey:(id)key;
- (void)tfs_encodeCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cgrect forKey:(id)key;
- (void)tfs_encodeCGSize:(struct CGSize { double x0; double x1; })cgsize forKey:(id)key;
- (id)tfs_decodeArrayOfObjectsOfClass:(Class)_class forKey:(id)key;
- (id)tfs_decodeDictionaryWithKeysOfClass:(Class)_class objectsOfClass:(Class)_class forKey:(id)key;

@end

#endif /* NSCoder_TFSCoding_h */
