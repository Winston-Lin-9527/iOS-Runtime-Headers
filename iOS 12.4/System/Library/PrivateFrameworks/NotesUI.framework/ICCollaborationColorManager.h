/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesUI/NotesUI-Structs.h>
@class NSMutableDictionary;

@interface ICCollaborationColorManager : NSObject {

	NSMutableDictionary* _userIDToColorsDict;

}

@property (nonatomic,retain) NSMutableDictionary * userIDToColorsDict;              //@synthesize userIDToColorsDict=_userIDToColorsDict - In the implementation block
-(UIColor*)highlightColorForUserID:(id)arg1 withPercentage:(double)arg2 forNote:(id)arg3 darkAppearance:(BOOL)arg4 ;
-(id)containerScopedUserRecordName;
-(id)baseColorValuesForUserID:(id)arg1 ;
-(NSMutableDictionary *)userIDToColorsDict;
-(id)participantAXDisplayNameForUserID:(id)arg1 forNote:(id)arg2 ;
-(void)setUserIDToColorsDict:(NSMutableDictionary *)arg1 ;
-(id)init;
@end
