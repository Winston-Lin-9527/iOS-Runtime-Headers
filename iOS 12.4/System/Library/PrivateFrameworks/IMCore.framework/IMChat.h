/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMItemsController.h>
#import <libobjc.A.dylib/INSpeakable.h>
#import <IMCore/IMSendProgressDelegate.h>

@protocol IMChatItemRules;
@class NSString, NSArray, IMAccount, NSData, NSMutableDictionary, IMMessage, NSMutableArray, NSMutableSet, NSNumber, IMTimingCollection, IMScheduledUpdater, IMSendProgress, NSDictionary, TUConversation, NSDate, MKMapItem, NSSet, IMChatRegistry, IMMessageItem, IMHandle;

@interface IMChat : IMItemsController <INSpeakable, IMSendProgressDelegate> {

	NSString* _guid;
	NSString* _typingGUID;
	NSString* _localUserIsComposing;
	NSString* _currentLocationGUID;
	NSString* _identifier;
	IMAccount* _account;
	NSString* _displayName;
	NSString* _roomName;
	NSString* _roomNameWithoutSuffix;
	NSString* _lastAddressedHandleID;
	NSString* _lastAddressedSIMID;
	NSString* _groupID;
	NSData* _engramID;
	NSArray* _participants;
	NSMutableDictionary* _participantStates;
	IMMessage* _invitationForPendingParticipants;
	NSMutableArray* _messagesPendingJoin;
	NSMutableSet* _guids;
	NSMutableDictionary* _chatProperties;
	NSMutableDictionary* _participantProperties;
	NSArray* _frequentReplies;
	NSArray* _attachments;
	NSNumber* _countOfAttachmentsNotCachedLocally;
	NSNumber* _countOfMessagesMarkedAsSpam;
	IMTimingCollection* _timingCollection;
	id<IMChatItemRules> _chatItemRules;
	IMScheduledUpdater* _chatItemsUpdater;
	IMSendProgress* _sendProgress;
	char _downgradeState;
	IMScheduledUpdater* _downgradeStateUpdater;
	long long _joinState;
	unsigned char _style;
	unsigned long long _dbFailedCount;
	unsigned long long _dbUnreadCount;
	void* _context;
	unsigned _hasBeenConfigured : 1;
	unsigned _isFirstMessageInvitation : 1;
	unsigned _wasInvitationHandled : 1;
	unsigned _didSendAFinishedMessage : 1;
	unsigned _hasPendingMarkRead : 1;
	unsigned _isUpdatingChatItems : 1;
	unsigned _ignoreDowngradeStatusUpdates : 1;
	unsigned _isFiltered : 1;
	unsigned _forceMMS : 1;
	BOOL _hasRefreshedServiceForSending;
	BOOL _hasHadSuccessfulQuery;
	long long _lastMessageTimeStampOnLoad;
	NSString* _currentUnreadHistoryQuery;
	BOOL _hasEarlierMessagesToLoad;
	BOOL _hasMoreRecentMessagesToLoad;
	BOOL _isCurrentlyDownloadingPurgedAssets;
	BOOL _hasSurfRequest;
	NSString* _personCentricID;
	NSDictionary* _bizIntent;
	double _latestTypingIndicatorTimeInterval;
	TUConversation* _conversation;

}

@property (nonatomic,readonly) BOOL suppressAccountRetargetingForNamedGroupConversation; 
@property (assign,nonatomic) BOOL forceMMS; 
@property (nonatomic,readonly) long long watermarkMessageID; 
@property (nonatomic,copy,readonly) NSDate * watermarkDate; 
@property (assign,getter=isVIP,nonatomic) BOOL VIP; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) BOOL isReplyEnabled; 
@property (nonatomic,readonly) BOOL isBusinessChat; 
@property (nonatomic,readonly) BOOL isMakoChat; 
@property (nonatomic,readonly) BOOL isAppleChat; 
@property (assign,nonatomic) unsigned long long numberOfMessagesToKeepLoaded; 
@property (nonatomic,readonly) BOOL hasMoreMessagesToLoad; 
@property (nonatomic,readonly) BOOL hasMoreRecentMessagesToLoad; 
@property (nonatomic,copy,readonly) NSArray * attachments; 
@property (nonatomic,copy,readonly) NSNumber * countOfAttachmentsNotCachedLocally; 
@property (nonatomic,readonly) BOOL isCurrentlyDownloadingPurgedAttachments; 
@property (nonatomic,readonly) NSSet * fmfHandles; 
@property (nonatomic,readonly) NSSet * allSiblingFMFHandles; 
@property (nonatomic,readonly) BOOL hasRecipientsFollowingLocation; 
@property (nonatomic,readonly) BOOL hasSiblingRecipientsSharingLocation; 
@property (nonatomic,readonly) BOOL allRecipientsFollowingLocation; 
@property (nonatomic,readonly) BOOL hasRecipientsSharingLocation; 
@property (nonatomic,readonly) BOOL allRecipientsSharingLocation; 
@property (nonatomic,readonly) IMChatRegistry * chatRegistry; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * spokenPhrase; 
@property (nonatomic,readonly) NSString * pronunciationHint; 
@property (nonatomic,readonly) NSString * vocabularyIdentifier; 
@property (nonatomic,readonly) NSArray * alternativeSpeakableMatches; 
@property (nonatomic,readonly) NSString * identifier; 
@property (setter=_setGUIDs:,nonatomic,retain) NSMutableSet * _guids;                                 //@synthesize guids=_guids - In the implementation block
@property (assign,nonatomic) double latestTypingIndicatorTimeInterval;                                //@synthesize latestTypingIndicatorTimeInterval=_latestTypingIndicatorTimeInterval - In the implementation block
@property (assign,nonatomic) BOOL hasSurfRequest;                                                     //@synthesize hasSurfRequest=_hasSurfRequest - In the implementation block
@property (nonatomic,readonly) BOOL _shouldRegisterChat; 
@property (nonatomic,retain) NSString * lastAddressedHandleID;                                        //@synthesize lastAddressedHandleID=_lastAddressedHandleID - In the implementation block
@property (nonatomic,retain) NSString * lastAddressedSIMID;                                           //@synthesize lastAddressedSIMID=_lastAddressedSIMID - In the implementation block
@property (nonatomic,retain) NSString * groupID;                                                      //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) void* contextInfo;                                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * personCentricID;                                              //@synthesize personCentricID=_personCentricID - In the implementation block
@property (assign,nonatomic) BOOL hasHadSuccessfulQuery; 
@property (nonatomic,readonly) TUConversation * conversation;                                         //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) NSString * guid;                                                       //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) IMAccount * account;                                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) unsigned char chatStyle;                                               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSString * chatIdentifier; 
@property (nonatomic,readonly) NSString * persistentID; 
@property (nonatomic,readonly) NSString * deviceIndependentID; 
@property (nonatomic,readonly) NSData * engramID;                                                     //@synthesize engramID=_engramID - In the implementation block
@property (nonatomic,readonly) unsigned long long messageCount; 
@property (nonatomic,readonly) unsigned long long unreadMessageCount; 
@property (nonatomic,readonly) unsigned long long messageFailureCount; 
@property (nonatomic,readonly) BOOL canLeaveChat; 
@property (nonatomic,readonly) BOOL canHaveMultipleParticipants; 
@property (nonatomic,readonly) unsigned long long overallChatStatus; 
@property (getter=isGroupChat,nonatomic,readonly) BOOL groupChat; 
@property (nonatomic,retain) NSString * displayName;                                                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * roomName;                                                   //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,readonly) NSString * roomNameWithoutSuffix; 
@property (nonatomic,retain) NSArray * frequentReplies;                                               //@synthesize frequentReplies=_frequentReplies - In the implementation block
@property (nonatomic,readonly) long long joinState;                                                   //@synthesize joinState=_joinState - In the implementation block
@property (nonatomic,readonly) BOOL hasUnhandledInvitation; 
@property (assign,nonatomic) BOOL localUserIsTyping; 
@property (assign,nonatomic) BOOL localUserIsRecording; 
@property (nonatomic,retain) NSString * localUserIsComposing; 
@property (nonatomic,readonly) NSString * localTypingMessageGUID; 
@property (nonatomic,readonly) IMMessage * firstMessage; 
@property (nonatomic,readonly) IMMessage * lastMessage; 
@property (nonatomic,readonly) BOOL lastMessageExists; 
@property (nonatomic,readonly) IMMessage * lastFinishedMessage; 
@property (nonatomic,readonly) IMMessageItem * lastFinishedMessageItem; 
@property (nonatomic,readonly) IMMessage * lastSentMessage; 
@property (nonatomic,readonly) IMMessage * lastIncomingMessage; 
@property (nonatomic,readonly) IMMessage * lastIncomingFinishedMessage; 
@property (nonatomic,readonly) IMMessage * lastIncomingFinishedMessageWithTextContent; 
@property (nonatomic,readonly) NSDate * lastFinishedMessageDate; 
@property (nonatomic,readonly) long long lastFinishedMessageID; 
@property (nonatomic,readonly) NSDate * lastSentMessageDate; 
@property (nonatomic,readonly) long long lastMessageTimeStampOnLoad;                                  //@synthesize lastMessageTimeStampOnLoad=_lastMessageTimeStampOnLoad - In the implementation block
@property (nonatomic,readonly) NSDate * lastTUConversationCreatedDate; 
@property (assign,nonatomic) BOOL isFiltered; 
@property (nonatomic,readonly) NSArray * participants;                                                //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) IMHandle * recipient; 
@property (nonatomic,retain) IMMessage * invitationForPendingParticipants;                            //@synthesize invitationForPendingParticipants=_invitationForPendingParticipants - In the implementation block
@property (nonatomic,copy) NSDictionary * bizIntent;                                                  //@synthesize bizIntent=_bizIntent - In the implementation block
+(Class)_NPSManagerClass;
+(void)updateVIPChatIdentifiers:(/*^block*/id)arg1 ;
+(/*^block*/id)watermarkComparator;
+(void)cleanWatermarkCache;
+(id)__im_adjustMessageSummaryInfoForSending:(id)arg1 ;
+(void)_initializeFMF;
+(void)setChatItemRulesClass:(Class)arg1 ;
+(Class)chatItemRulesClass;
+(id)_GUIDsForKey:(id)arg1 ;
+(void)_storeGUID:(id)arg1 forKey:(id)arg2 ;
+(void)_removeGUID:(id)arg1 fromList:(id)arg2 ;
+(BOOL)isGUIDInAttemptingListInScrutinyMode:(id)arg1 ;
+(void)moveVIPChatAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
+(void)storeGUIDInAttemptingListInScrutinyMode:(id)arg1 ;
+(void)removeGUIDInAttemptingListInScrutinyMode:(id)arg1 ;
-(MKMapItem *)mapItem;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)guid;
-(NSString *)pronunciationHint;
-(NSArray *)alternativeSpeakableMatches;
-(NSSet *)fmfHandles;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(IMHandle *)recipient;
-(void)setRecipient:(IMHandle *)arg1 ;
-(NSString *)persistentID;
-(NSString *)spokenPhrase;
-(NSString *)vocabularyIdentifier;
-(BOOL)suppressAccountRetargetingForNamedGroupConversation;
-(void)_targetToService:(id)arg1 newComposition:(BOOL)arg2 ;
-(void)_invalidateDowngradeState;
-(void)setHasHadSuccessfulQuery:(BOOL)arg1 ;
-(void)_setAndIncrementDowngradeMarkersForManual:(BOOL)arg1 ;
-(BOOL)sendDowngradeNotificationTo:(id)arg1 ;
-(BOOL)_accountIsOperational:(id)arg1 forService:(id)arg2 ;
-(BOOL)_chatHasValidAccount:(id)arg1 forService:(id)arg2 ;
-(id)_previousAccountForService:(id)arg1 ;
-(void)_setPreviousAccount:(id)arg1 forService:(id)arg2 ;
-(void)_setAccount:(id)arg1 ;
-(void)_calculateDowngradeState;
-(void)_calculateDowngradeStateTimerFired;
-(id)_consecutiveDowngradeAttemptsViaManualDowngrades:(BOOL)arg1 ;
-(void)_updateDowngradeState:(char)arg1 checkAgainInterval:(double)arg2 ;
-(void)_clearDowngradeMarkers;
-(BOOL)hasHadSuccessfulQuery;
-(void)_handleDeliveredCommand:(id)arg1 ;
-(void)_handleIncomingCommand:(id)arg1 ;
-(void)_delayedInvalidateDowngradeState;
-(void)_markItemAsPlayed:(id)arg1 ;
-(BOOL)_hasJustSentAMessage;
-(NSDate *)watermarkDate;
-(long long)compareChatByDate:(id)arg1 ;
-(id)_storedWatermarkMessageID;
-(void)_postNotification:(id)arg1 userInfo:(id)arg2 ;
-(long long)watermarkMessageID;
-(long long)_compareChat:(id)arg1 withDate:(id)arg2 withDate:(id)arg3 ;
-(id)_tuDateForChat:(id)arg1 ;
-(void)updateWatermarks;
-(void)saveWatermark;
-(void)verifyFiltering;
-(void)_updateDisplayName:(id)arg1 ;
-(void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2 withMessageSummaryInfo:(id)arg3 ;
-(id)_initWithItems:(id)arg1 ;
-(id)_lastFinishedMessage;
-(void)updateMessage:(id)arg1 ;
-(void)setPersonCentricID:(NSString *)arg1 ;
-(id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 displayName:(id)arg5 lastAddressedHandle:(id)arg6 lastAddressedSIMID:(id)arg7 items:(id)arg8 participants:(id)arg9 isFiltered:(BOOL)arg10 hasHadSuccessfulQuery:(BOOL)arg11 ;
-(void)_accountLoggedOut:(id)arg1 ;
-(void)_daemonDied:(id)arg1 ;
-(void)_daemonAlive:(id)arg1 ;
-(void)_accountControllerUpdated:(id)arg1 ;
-(BOOL)canHaveMultipleParticipants;
-(void)_watchHandleStatusChangedForHandle:(id)arg1 ;
-(void)_updateChatItems;
-(void)_configureLocationShareItem:(id)arg1 ;
-(void)_setDBUnreadCount:(unsigned long long)arg1 postNotification:(BOOL)arg2 ;
-(unsigned long long)messageFailureCount;
-(unsigned long long)numberOfMessagesToKeepLoaded;
-(void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4 limit:(unsigned long long)arg5 ;
-(void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4 limit:(unsigned long long)arg5 numberOfMessagesBeforeGUID:(unsigned long long)arg6 numberOfMessagesAfterGUID:(unsigned long long)arg7 ;
-(void)_setAccount:(id)arg1 locally:(BOOL)arg2 ;
-(id)_archivedItemsToReplace:(id)arg1 numberOfMessagesBeforeGUID:(unsigned long long)arg2 numberOfMessagesAfterGUID:(unsigned long long)arg3 ;
-(void)_updateChatItemsWithReason:(id)arg1 block:(/*^block*/id)arg2 shouldPost:(BOOL)arg3 ;
-(id)_appendArchivedItemsToItemsArray:(id)arg1 ;
-(id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(void)_setCountOfMessagesMarkedAsSpam:(id)arg1 ;
-(void)_updateChatItemsWithReason:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setIsFiltered:(BOOL)arg1 ;
-(void)_resetChatIdToLastMessageItemMap;
-(void)_postNotification:(id)arg1 userInfo:(id)arg2 shouldLog:(BOOL)arg3 ;
-(unsigned long long)stateForParticipant:(id)arg1 ;
-(unsigned long long)paymentTypeForMessage:(id)arg1 ;
-(BOOL)hasSurfRequestForPaymentType:(unsigned long long)arg1 ;
-(BOOL)_isDuplicate:(id)arg1 ;
-(void)_fixSendingItemDateAndSortID:(id)arg1 ;
-(void)_updateLocationShareItemsForSender:(id)arg1 ;
-(void)_setJoinState:(long long)arg1 quietly:(BOOL)arg2 ;
-(void)_setParticipantState:(unsigned long long)arg1 forHandle:(id)arg2 quietly:(BOOL)arg3 ;
-(id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleAttributionChanged;
-(void)_clearCachedIdentifier;
-(void)_setJoinState:(long long)arg1 ;
-(void)_fixItemForSendingMessageTime:(id)arg1 ;
-(NSDate *)lastSentMessageDate;
-(void)_setLocalUserIsComposing:(id)arg1 suppliedGUID:(id)arg2 ;
-(void)_sendCurrentLocationMessageUsingLocationManager:(id)arg1 ;
-(double)latestTypingIndicatorTimeInterval;
-(void)_setLocalUserIsComposing:(id)arg1 suppliedGUID:(id)arg2 typingIndicatorData:(id)arg3 ;
-(void)setLatestTypingIndicatorTimeInterval:(double)arg1 ;
-(BOOL)_shouldSendCancelTypingIndicator;
-(BOOL)canSendTransfer:(id)arg1 ;
-(void)__clearReadMessageCache;
-(void)markMessagesAsRead:(id)arg1 ;
-(void)_setTimerForReadMessageCache;
-(void)_clearUnreadCount;
-(id)allPropertiesOfParticipant:(id)arg1 ;
-(void)setRecipient:(id)arg1 locally:(BOOL)arg2 ;
-(void)_addParticipants:(id)arg1 withState:(unsigned long long)arg2 ;
-(void)_unwatchHandleStatusChangedForHandle:(id)arg1 ;
-(void)_leaveChat:(BOOL)arg1 ;
-(void)_setParticipantState:(unsigned long long)arg1 forHandles:(id)arg2 quietly:(BOOL)arg3 ;
-(BOOL)canAddParticipant:(id)arg1 ;
-(id)participantsWithState:(unsigned long long)arg1 ;
-(id)_pendingParticipants;
-(IMMessage *)invitationForPendingParticipants;
-(void)_inviteParticipants:(id)arg1 reason:(id)arg2 toiMessageChat:(BOOL)arg3 ;
-(void)setInvitationForPendingParticipants:(IMMessage *)arg1 ;
-(void)_inviteParticipantsToChat:(id)arg1 reason:(id)arg2 toiMessageChat:(BOOL)arg3 ;
-(void)_removeParticipantsFromChat:(id)arg1 reason:(id)arg2 fromiMessageChat:(BOOL)arg3 ;
-(BOOL)hasSurfRequestNotFromMe:(id)arg1 ;
-(void)leave;
-(BOOL)_sanityCheckAccounts;
-(void)_updateEngramID:(id)arg1 ;
-(void)sendProgress:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(BOOL)arg6 ;
-(void)_setupObservation;
-(BOOL)_shouldRegisterChat;
-(void)_setDBUnreadCount:(unsigned long long)arg1 ;
-(void)_setDBFailedCount:(unsigned long long)arg1 ;
-(BOOL)_shouldAnnouncePeopleJoin;
-(void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4 ;
-(IMMessage *)lastIncomingFinishedMessageWithTextContent;
-(void)updateShouldForceToSMS:(BOOL)arg1 ;
-(void)didUnregisterFromRegistry:(id)arg1 ;
-(void)_recomputeOverallChatStatusQuietly:(BOOL)arg1 ;
-(void)_handleHandleStatusChanged:(id)arg1 ;
-(id)_timingCollection;
-(void)_startTiming:(id)arg1 ;
-(void)_endTiming;
-(void)_postIMChatItemsDidChangeNotificationWithInserted:(id)arg1 removed:(id)arg2 reload:(id)arg3 regenerate:(id)arg4 oldChatItems:(id)arg5 shouldLog:(BOOL)arg6 ;
-(void)_handleMessageGUIDDeletions:(id)arg1 ;
-(void)_participant:(id)arg1 statusChanged:(int)arg2 ;
-(void)_showErrorMessage:(id)arg1 ;
-(void)_engroupParticipantsUpdated;
-(unsigned long long)overallChatStatus;
-(void)_updateLastAddressedHandleID:(id)arg1 ;
-(void)_updateLastAddressedSIMID:(id)arg1 ;
-(NSString *)roomNameWithoutSuffix;
-(BOOL)hasUnhandledInvitation;
-(void)declineInvitation;
-(void)cancelMessage:(id)arg1 ;
-(void)updateMessage:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)markMessageAsRead:(id)arg1 ;
-(void)_setChatProperties:(id)arg1 ;
-(id)allChatProperties;
-(id)valueForProperty:(id)arg1 ofParticipant:(id)arg2 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3 ;
-(BOOL)_hasCommunicatedOnService:(id)arg1 ;
-(BOOL)canAddParticipants:(id)arg1 ;
-(void)_invitePendingParticipants;
-(void)inviteParticipants:(id)arg1 reason:(id)arg2 ;
-(void)removeParticipants:(id)arg1 reason:(id)arg2 ;
-(void)addPendingParticipants:(id)arg1 ;
-(void)_handleAddressBookChangeForRecipientUID:(id)arg1 ;
-(BOOL)hasStoredMessageWithGUID:(id)arg1 ;
-(id)_initWithDictionaryRepresentation:(id)arg1 items:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4 ;
-(void)setFrequentReplies:(NSArray *)arg1 ;
-(NSMutableSet *)_guids;
-(void)_setGUIDs:(id)arg1 ;
-(void)setHasSurfRequest:(BOOL)arg1 ;
-(id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 messages:(id)arg4 participants:(id)arg5 isFiltered:(BOOL)arg6 hasHadSuccessfulQuery:(BOOL)arg7 ;
-(id)loadMessagesUpToGUID:(id)arg1 date:(id)arg2 limit:(unsigned long long)arg3 loadImmediately:(BOOL)arg4 ;
-(void)_setAttachments:(id)arg1 ;
-(BOOL)hasMoreMessagesToLoad;
-(BOOL)hasMoreRecentMessagesToLoad;
-(id)loadMessagesUpToGUID:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(void)_setCountOfAttachmentsNotCachedLocally:(id)arg1 ;
-(void)_setIsDownloadingPurgedAssets:(BOOL)arg1 ;
-(void)_replaceStaleChatItems;
-(id)_getDeleteChatItemMap:(id)arg1 ;
-(id)_getMessageChatItemMap:(id)arg1 withDeleteMap:(id)arg2 andAllChatItems:(id)arg3 ;
-(unsigned long long)scrutinyModeAttemptCount;
-(id)_renderingDataDictionary;
-(void)_setRenderingDataDictionary:(id)arg1 ;
-(BOOL)_serverBagPreventsScrutinyMode;
-(void)watermarkInForScrutinyMode;
-(id)chatItemsForItems:(id)arg1 ;
-(BOOL)hasRecipientsSharingLocation;
-(BOOL)allRecipientsSharingLocation;
-(void)startTrackingParticipantLocations;
-(void)stopTrackingParticipantLocations;
-(id)testChatItems;
-(BOOL)canEditChatItem:(id)arg1 ;
-(BOOL)mapsToTUConversation:(id)arg1 ;
-(void)_launchAppForJoinRequest:(id)arg1 ;
-(void)_itemsDidChange:(id)arg1 ;
-(unsigned long long)unreadMessageCount;
-(TUConversation *)conversation;
-(TUConversation *)conversation;
-(NSString *)lastAddressedSIMID;
-(BOOL)forceMMS;
-(void)setForceMMS:(BOOL)arg1 ;
-(id)chatItems;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(IMMessage *)lastFinishedMessage;
-(NSString *)lastAddressedHandleID;
-(id)valueForChatProperty:(id)arg1 ;
-(void)sendCurrentLocationMessage;
-(NSString *)deviceIndependentID;
-(long long)lastFinishedMessageID;
-(NSDate *)lastFinishedMessageDate;
-(void*)contextInfo;
-(void)setNumberOfMessagesToKeepLoaded:(unsigned long long)arg1 ;
-(void)setContextInfo:(void*)arg1 ;
-(BOOL)lastMessageExists;
-(BOOL)isFiltered;
-(BOOL)isGroupChat;
-(void)watermarkOutForScrutinyMode;
-(BOOL)isInScrutinyMode;
-(void)clearScrutinyMode;
-(NSString *)chatIdentifier;
-(void)markAllMessagesAsRead;
-(id)allMessagesToReportAsSpam;
-(IMMessage *)lastIncomingMessage;
-(void)joinExistingTUConversationWithVideoEnabled:(BOOL)arg1 ;
-(void)initiateTUConversationWithVideoEnabled:(BOOL)arg1 ;
-(void)setLocalUserIsComposing:(NSString *)arg1 ;
-(void)setLastAddressedHandleID:(NSString *)arg1 ;
-(void)setLastAddressedSIMID:(NSString *)arg1 ;
-(void)setLocalUserIsRecording:(BOOL)arg1 ;
-(void)setLocalUserIsTyping:(BOOL)arg1 ;
-(id)messagesToReportAsSpamFromChatItems:(id)arg1 ;
-(void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(BOOL)arg2 ;
-(void)deleteTransfers:(id)arg1 ;
-(unsigned char)chatStyle;
-(BOOL)isBusinessChat;
-(BOOL)isSMS;
-(void)updateIsFiltered:(BOOL)arg1 ;
-(void)verifyChatShouldBeSMSSpam;
-(void)updateWasDetectedAsSMSSpam:(BOOL)arg1 ;
-(long long)numberOfTimesRespondedToThread;
-(BOOL)containsMessageFromContactOrMe;
-(void)autoReportSpam;
-(void)markAsAutoSpamReported;
-(BOOL)hasKnownParticipants;
-(IMMessageItem *)lastFinishedMessageItem;
-(id)lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)arg1 ;
-(BOOL)hasRecipientsFollowingLocation;
-(unsigned long long)markAsSpam;
-(void)stopSharingLocation;
-(BOOL)hasSurfRequest;
-(BOOL)isHoldingUpdatesForKey:(id)arg1 ;
-(void)closeSession;
-(BOOL)allRecipientsFollowingLocation;
-(NSSet *)allSiblingFMFHandles;
-(BOOL)authorizedToSendCurrentLocationMessage;
-(BOOL)canSendCurrentLocationMessage;
-(void)shareLocationUntilDate:(id)arg1 ;
-(BOOL)hasSiblingRecipientsSharingLocation;
-(void)leaveiMessageGroup;
-(void)downloadPurgedAttachments;
-(NSNumber *)countOfAttachmentsNotCachedLocally;
-(BOOL)isCurrentlyDownloadingPurgedAttachments;
-(void)setValue:(id)arg1 forChatProperty:(id)arg2 ;
-(void)deleteChatItems:(id)arg1 ;
-(id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(BOOL)arg3 ;
-(BOOL)deleteAllHistory;
-(IMMessage *)lastIncomingFinishedMessage;
-(void)refreshServiceForSending;
-(BOOL)localUserIsRecording;
-(BOOL)localUserIsTyping;
-(void)endListeningToAttributionChanges;
-(void)beginListeningToAttributionChanges;
-(BOOL)isDowngraded;
-(BOOL)canLeaveChat;
-(long long)joinState;
-(BOOL)isAppleChat;
-(BOOL)isMakoChat;
-(BOOL)isReplyEnabled;
-(void)inviteParticipantsToiMessageChat:(id)arg1 reason:(id)arg2 ;
-(void)removeParticipantsFromiMessageChat:(id)arg1 reason:(id)arg2 ;
-(NSDate *)lastTUConversationCreatedDate;
-(void)deleteExtensionPayloadData;
-(id)loadUnreadMessagesWithLimit:(unsigned long long)arg1 fallbackToMessagesUpToGUID:(id)arg2 ;
-(IMMessage *)firstMessage;
-(id)loadMessagesBeforeAndAfterGUID:(id)arg1 numberOfMessagesToLoadBeforeGUID:(unsigned long long)arg2 numberOfMessagesToLoadAfterGUID:(unsigned long long)arg3 loadImmediately:(BOOL)arg4 ;
-(NSArray *)frequentReplies;
-(id)loadFrequentRepliesLimit:(unsigned long long)arg1 loadImmediately:(BOOL)arg2 ;
-(id)messageForGUID:(id)arg1 ;
-(long long)lastMessageTimeStampOnLoad;
-(long long)compareChatByTUDateAndLastFinishedMessageDate:(id)arg1 ;
-(BOOL)shouldForceToSMS;
-(NSString *)localTypingMessageGUID;
-(void)sendMessage:(id)arg1 ;
-(void)setLocalUserIsComposing:(id)arg1 typingIndicatorData:(id)arg2 ;
-(NSString *)localUserIsComposing;
-(void)setVIP:(BOOL)arg1 ;
-(BOOL)isVIP;
-(void)endHoldingUpdatesForAllKeys;
-(void)updateChatItemsIfNeeded;
-(void)markChatItemAsPlayed:(id)arg1 ;
-(void)markAllLocationShareItemsAsUnactionable;
-(void)markChatItemAsPlayedExpressiveSend:(id)arg1 ;
-(void)markChatItemAsSaved:(id)arg1 ;
-(void)setBizIntent:(NSDictionary *)arg1 ;
-(NSDictionary *)bizIntent;
-(void)userToggledReadReceiptSwitch:(BOOL)arg1 ;
-(void)_sendMessage:(id)arg1 adjustingSender:(BOOL)arg2 shouldQueue:(BOOL)arg3 ;
-(BOOL)_handleIncomingItem:(id)arg1 ;
-(id)sendProgressDelegate;
-(void)setSendProgressDelegate:(id)arg1 ;
-(NSString *)personCentricID;
-(IMChatRegistry *)chatRegistry;
-(void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2 withAssociatedMessageInfo:(id)arg3 ;
-(id)messageAcknowledgmentSummaryForConversationListWithMessage:(id)arg1 ;
-(void)loadAttachments:(/*^block*/id)arg1 ;
-(NSData *)engramID;
-(IMMessage *)lastSentMessage;
-(void)_setDisplayName:(id)arg1 ;
-(void)join;
-(void)setRoomName:(NSString *)arg1 ;
-(NSString *)roomName;
-(IMAccount *)account;
-(void)_initialize;
-(BOOL)canSendMessage:(id)arg1 ;
-(void)acceptInvitation;
-(IMMessage *)lastMessage;
-(id)init;
-(void)dealloc;
-(NSArray *)attachments;
-(NSString *)description;
-(void)clear;
-(unsigned long long)messageCount;
-(NSString *)displayName;
-(void)remove;
-(NSArray *)participants;
@end
