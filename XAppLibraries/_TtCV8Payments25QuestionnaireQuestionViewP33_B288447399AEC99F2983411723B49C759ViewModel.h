//
#ifndef _TtCV8Payments25QuestionnaireQuestionViewP33_B288447399AEC99F2983411723B49C759ViewModel_h
#define _TtCV8Payments25QuestionnaireQuestionViewP33_B288447399AEC99F2983411723B49C759ViewModel_h
@import Foundation;

#include "UIDocumentPickerDelegate-Protocol.h"

@class NSObject;

@interface Payments.QuestionnaireQuestionView.(ViewModel in _B288447399AEC99F2983411723B49C75) : NSObject <UIDocumentPickerDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 questionnaireVersion;
    @40@0:8:16@24@32 submissionID;
    @40@0:8:16@24@32 questions;
    @40@0:8:16@24@32 answers;
    @40@0:8:16@24@32 currentQuestion;
    @40@0:8:16@24@32 _selectedOptionIDs;
    @40@0:8:16@24@32 textsByOptionID;
    @40@0:8:16@24@32 _textFieldTextByIdentifier;
    @40@0:8:16@24@32 _address;
    @40@0:8:16@24@32 _documents;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtCV8Payments25QuestionnaireQuestionViewP33_B288447399AEC99F2983411723B49C759ViewModel_h */
