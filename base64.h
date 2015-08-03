/**将字符串str加成base64密文 **/
void base64Encode(char *str,char *outputStr);
/**将加密后的str解成原文 */
void base64Decode(char *str, char *outputStr);

/*** 找到加密后的字符所在的下标值 ***/
int GetIndex(char c);