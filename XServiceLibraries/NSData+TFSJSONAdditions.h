//
#ifndef NSData_TFSJSONAdditions_h
#define NSData_TFSJSONAdditions_h
@import Foundation;

@interface NSData (TFSJSONAdditions)

/* instance methods */
- (id)tfs_JSONDictionary:(out id *)jsondictionary;
- (id)tfs_JSONArray:(out id *)jsonarray;

@end

#endif /* NSData_TFSJSONAdditions_h */
