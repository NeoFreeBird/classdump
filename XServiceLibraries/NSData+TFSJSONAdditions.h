//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
