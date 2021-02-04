/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestionsUI/SGUISuggestionConfirmationController.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@class SGRealtimeContact, NSString;

@interface SGUIContactConfirmationController : SGUISuggestionConfirmationController <CNContactViewControllerDelegate> {

	SGRealtimeContact* _realtimeContact;
	/*^block*/id _finished;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)confirmSuggestion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)rejectSuggestion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(id)_contactsSuggestionsService;
-(void)confirmSuggestion:(id)arg1 withPresentationHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
@end
