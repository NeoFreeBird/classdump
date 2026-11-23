//
#ifndef TFSTwitterEntityURL_Sharing_h
#define TFSTwitterEntityURL_Sharing_h
@import Foundation;

@interface TFSTwitterEntityURL (Sharing)

/* instance methods */
- (id)emailSubjectWithUser:(id)user;
- (id)emailBodyWithSourceStatus:(id)status;

@end

#endif /* TFSTwitterEntityURL_Sharing_h */
