//
#ifndef T1LiveEventArchivedSensitivePromptService_h
#define T1LiveEventArchivedSensitivePromptService_h
@import Foundation;

#include "T1ArchivedDataService.h"

@interface T1LiveEventArchivedSensitivePromptService : T1ArchivedDataService

/* class methods */
+ (id)archivedDataCacheDirectory;

/* instance methods */
- (void)markSeenSensitivePromptForEventID:(id)id;
- (_Bool)hasSeenSensitivePromptForEventID:(id)id;

@end

#endif /* T1LiveEventArchivedSensitivePromptService_h */
