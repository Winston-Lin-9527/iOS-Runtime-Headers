/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUISuggestionsViewDelegate <NSObject>
@optional
-(double)contentWidthForSuggestionsView:(id)arg1;
-(double)statusBarHeightForSuggestionsView:(id)arg1;
-(BOOL)suggestionsViewIsInTextInputMode:(id)arg1;
-(double)statusViewHeightForSuggestionsView:(id)arg1;
-(void)getNextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(id)nextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2;
-(void)didShowSuggestionsForSuggestionsView:(id)arg1;
-(void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;

@end
