GtkWidget *menu_create_main (int bar, int away, GtkWidget **away_item, GtkWidget **user_menu);
void menu_showhide (void);
void menu_newshell_set_palette (session *sess);
void menu_urlmenu (GdkEventButton * event, char *url);
void menu_chanmenu (session *sess, GdkEventButton * event, char *chan);
void menu_nickmenu (session *sess, GdkEventButton * event, char *nick, int num_sel);
void menu_middlemenu (session *sess, GdkEventButton *event);
void menu_quick_item_with_callback (void *callback, char *label, GtkWidget * menu, void *arg);
void userlist_button_cb (GtkWidget * button, char *cmd);
void goto_url (char *url);
void nick_command_parse (session *sess, char *cmd, char *nick, char *allnick);
void usermenu_update (void);
void menu_toggle_item (char *label, GtkWidget *menu, void *callback, void *userdata, int state);
GtkWidget *create_icon_menu (char *labeltext, void *stock_name, int is_stock);
